#include "Config.hpp"
#include "TileConfig.hpp"
#include "Colors.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <map>

std::map<std::string, TileConfig> Config::defaultTiles {
    {"PLAYER", TileConfig('P')},
    {"BOMB", TileConfig('O')},
    {"EXPLOSION", TileConfig('@')},
    {"WALL", TileConfig('W')},
    {"BROKENWALL", TileConfig('w')},
    {"UNBREAKABLEWALL", TileConfig('I')},
    {"MONSTER", TileConfig('M')},
    {"GHOST", TileConfig('G')},
    {"BOWMAN", TileConfig('B')},
    {"MORELIFE", TileConfig('L')},
    {"POWERUP", TileConfig('U')},
    {"MOREBOMB", TileConfig('E')},
    {"SPEEDUP", TileConfig('S')},
    {"SCALEUP", TileConfig('R')},
    {"AIM", TileConfig('X')}
};

Config::Config(std::string fileName) {
    std::ifstream fileInput(fileName);
    std::string tmp;
    std::string delim = "=";

    while (std::getline(fileInput, tmp)) {
        int i = tmp.find(delim);

        std::string key = tmp.substr(0, i - 1);
        char ch = tmp[i + 2];
        std::string color = tmp.substr(i + 4, tmp.size());

        if (defaultTiles.find(key) != defaultTiles.end())
            tiles.insert(std::pair<std::string, TileConfig>(key, TileConfig(ch, color)));
    }

    std::ofstream fileOutput(fileName, std::ios_base::app);

    std::map<std::string, TileConfig>::iterator ptr = defaultTiles.begin();
    while (ptr != defaultTiles.end()) {
        if (tiles.find(ptr->first) == tiles.end()) {
            tiles.insert(*ptr);
            std::cout << (ptr->second).to_str2() << std::endl;
            fileOutput << ptr->first + " = " + (ptr->second).to_str2() << std::endl;
        }
            
        ptr++;
    }
}

std::map<std::string, TileConfig>* Config::getTiles() {
    return &(this->tiles);
}