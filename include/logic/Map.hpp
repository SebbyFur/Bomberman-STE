#ifndef _MAP_
#define _MAP_

#include <string>
#include <vector>
#include "logic/Tile.hpp"

class Map {
    private:
        size_t width;
        size_t height;
        size_t logic_size;
        std::string strmap;
        Tile** logic_map;
    public:
        Map(std::string path, TilesConfig& tiles);
        ~Map();
        const std::string& get_str() const;
        friend std::ostream& operator<<(std::ostream& out, const Map& map);
};

#endif