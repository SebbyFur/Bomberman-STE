#include "logic/Map.hpp"

Map::Map(std::string path, TilesConfig& tiles) {
    std::ifstream file(path);
    std::string buffer;

    if (!file) throw std::invalid_argument("Impossible d'ouvrir le fichier");

    std::stringstream strs;
    strs << file.rdbuf();
    strmap = strs.str();

    if (!(width = is_length_equal(strmap, '\n'))) throw std::invalid_argument("Le format de la carte est invalide !");
    rm_spaces(strmap);

    height = get_nb_lines(strmap, '\n') + 1;

    logic_size = width * height;
    logic_map = new Tile*[logic_size];

    for (size_t x = 0; x < logic_size; x++) {
        logic_map[x] = new Tile();
        logic_map[x]->setSquare(make_square(strmap[x], tiles));
        if (logic_map[x]->getSquare() == NULL) logic_map[x]->setSquare(make_square('_', tiles));
        logic_map[x]->setEntity(make_entity(strmap[x], tiles));
    }
}

Map::~Map() {
    for (size_t x = 0; x < logic_size; x++) {
        delete logic_map[x];
    }

    delete[] logic_map;
}

const std::string& Map::get_str() const {
    return this->strmap;
}

std::ostream& operator<<(std::ostream& out, const Map& map) {
    for (size_t x = 0; x < map.logic_size; x++) {
        out << *(map.logic_map[x]);
        if ((x + 1) % map.width == 0) out << '\n';
    }

    return out;
}