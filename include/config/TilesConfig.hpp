#ifndef _CONFIG_
#define _CONFIG_

#include "config/TileConfigKey.hpp"
#include "config/TileConfigValue.hpp"
#include <string>
#include <map>

class TilesConfig {
    private:
        std::map<TileConfigKey, TileConfigValue*> tiles;
    public:
        TilesConfig(std::string fileName);
        ~TilesConfig();
        TileConfigValue& operator[](char charKey);
        TileConfigValue& operator[](std::string strKey);
        void print_tiles();
        void rm_spaces(std::string& str);
};

#endif