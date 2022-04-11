#include "logic/Map.hpp"
#include "entity/EntityMap.hpp"
#include "square/SquareMap.hpp"
#include "item/ItemMap.hpp"
#include "belonging/BelongingMap.hpp"
#include "util/Util.hpp"

Map::Map(std::string path, const ElementsConfig& display) : display(display), aim_spawned(false), players_lost(0) {
    std::ifstream file(path);
    std::string buffer;

    if (!file) throw std::invalid_argument("Impossible d'ouvrir le fichier");

    std::stringstream strs;
    strs << file.rdbuf();
    strmap = strs.str();

    if (!(width = is_length_equal(strmap, '\n'))) throw std::invalid_argument("Le format de la carte est invalide !");

    height = get_nb_lines(strmap, '\n') + 1;
    rm_spaces(strmap);

    logic_size = width * height;
    logic_map = new Tile*[logic_size];

    for (int x = 0; x < logic_size; x++) {
        logic_map[x] = new Tile(this, Position(x / width, x % width));
        Entity* entity = make_entity(strmap[x], logic_map[x]);
        Square* square = make_square(strmap[x], logic_map[x]);
        Item* item = make_item(strmap[x], logic_map[x]);
        if (square == nullptr) square = make_square('_', logic_map[x]);

        logic_map[x]->setEntity(entity);
        logic_map[x]->setSquare(square);
        logic_map[x]->setItem(item);

        if (entity != nullptr) {
            if (typeid(*entity) == typeid(Player)) {
                players.push_back(dynamic_cast<Player*>(entity));
                players_lost++;
            } else {
                mobs.push_back(entity);
            }
        }
    }
}

Map::~Map() {
    for (int x = 0; x < logic_size; x++) {
        if (logic_map[x] != nullptr) delete logic_map[x];
    }

    if (logic_map != nullptr) delete[] logic_map;
}

const std::string& Map::get_str() const {
    return this->strmap;
}

Tile* Map::getTileAtPos(int x, int y) const {
    return getTileAtPos(Position(x, y));
}

Tile* Map::getTileAtPos(const Position pos) const {
    if (pos.getX() >= height || pos.getY() >= width || pos.getX() < 0 || pos.getY() < 0) {
        return nullptr;
    }
    return this->logic_map[pos.getX() * width + pos.getY()];
}

std::vector<Player*> Map::getPlayers() const {
    return players;
}

const ElementsConfig& Map::getConfig() const {
    return display;
}

int Map::getMobsLeft() const {
    return mobs.size();
}

void Map::minusPlayersLost() {
    players_lost--;
}

int Map::tick() {
    if (players.size() == 0) return players_lost;
    for (auto it = players.begin(); it != players.end(); it++) {
        int turns = (*it)->getSpeed();
        int del;

        while (turns-- && !(del = (*it)->nextTurn())) {
            std::cout << *this << std::endl;
            std::cout << *(*it) << std::endl;
        }

        if (del) {
            std::cout << *this << std::endl;
            std::cout << *(*it) << std::endl;
            if ((*it)->getHealth() > 0) {
                std::cout << Color::GREEN << "T'es pas mort" << Color::RESET << std::endl;
            } else {
                std::cout << Color::BOLDRED << "T'es mort" << Color::RESET << std::endl;
            }
            delete *it;
            players.erase(it);
            it--;
        }
    }

    for (auto it = mobs.begin(); it != mobs.end(); it++) {
        if ((*it)->nextTurn()) {
            delete *it;
            mobs.erase(it);
            it--;
        }
    }

    return -1;
}

bool Map::hasAimSpawned() const {
    return aim_spawned;
}

void Map::setAimSpawned(int aim_spawned) {
    this->aim_spawned = aim_spawned;
}

std::ostream& operator<<(std::ostream& out, const Map& map) {
    for (int x = 0; x < map.logic_size; x++) {
        out << *(map.logic_map[x]);
        if ((x + 1) % map.width == 0) out << '\n';
    }

    return out;
}