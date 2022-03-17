#include "logic/Map.hpp"
#include "config/TilesConfig.hpp"
#include <iostream>
#include <algorithm>
#include <fstream>

Map::Map(std::string path) {
    std::ifstream file(path);
    std::string buffer;
    while (std::getline(file, buffer, '\r')) map += buffer;
}

const std::string& Map::to_str() const {
    return this->map;
}

std::ostream& operator<<(std::ostream& out, const Map& map) {
    out << map.map;
    return out;
}