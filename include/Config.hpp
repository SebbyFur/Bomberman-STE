#ifndef _CONFIG_
#define _CONFIG_

#include "TileConfig.hpp"
#include <string>
#include <map>

class Config {
    private:
        std::map<std::string, TileConfig> tiles;
    public:
        Config(std::string fileName);
        static std::map<std::string, TileConfig> defaultTiles;
        std::map<std::string, TileConfig>* getTiles();
        void rm_spaces(std::string& str);
};

#endif