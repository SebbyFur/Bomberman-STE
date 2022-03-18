#include "logic/Map.hpp"
#include "config/TilesConfig.hpp"
#include "util/Util.hpp"
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <fstream>

Map::Map(std::string path) {
    std::ifstream file(path);
    std::string buffer;

    if (!file) throw std::invalid_argument("Impossible d'ouvrir le fichier");

    std::stringstream strs;
    strs << file.rdbuf();
    strmap = strs.str();

    if (!is_length_equal(strmap, '\n')) throw std::invalid_argument("Le format de la carte est invalide !");
}

const std::string& Map::to_str() const {
    return this->strmap;
}

std::ostream& operator<<(std::ostream& out, const Map& map) {
    out << map.strmap;
    return out;
}