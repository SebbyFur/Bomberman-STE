#include "Map.hpp"
#include "Colors.hpp"
#include <fstream>
#include <string>

Map::Map(std::string path) {
    std::ifstream file(path);
    std::string buffer;
    while (std::getline(file, buffer)) {
        this->map += buffer + "\n";
    }
    file.close();
}

std::ostream& operator<<(std::ostream& out, const Map& map) {
    std::string strmap = map.map;
    out << strmap;
    return out;
}