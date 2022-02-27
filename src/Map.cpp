#include "Map.hpp"
#include "TilesConfig.hpp"
#include <iostream>
#include <fstream>

Map::Map(std::string path) {
    std::ifstream file(path);
    TilesConfig config("config.txt");
    std::string buffer;
    while (std::getline(file, buffer)) {
        for (auto& x : buffer) {
            if (x != '\r') {
                std::string r = "RESET";
                std::cout << config[x] << Colors::getColor(r);
            } else {
                std::cout << std::endl;
            }
        }
    }
    std::cout << std::endl;

    file.close();
}

std::ostream& operator<<(std::ostream& out, const Map& map) {
    std::string strmap = map.map;
    out << strmap;
    return out;
}