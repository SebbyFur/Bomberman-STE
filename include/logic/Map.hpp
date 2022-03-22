#ifndef _MAP_
#define _MAP_

#include "logic/Tile.hpp"
#include "element/ElementsConfig.hpp"
#include "util/Util.hpp"
#include "entity/EntityMap.hpp"
#include "square/SquareMap.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <fstream>

class Map {
    private:
        size_t width;
        size_t height;
        size_t logic_size;
        std::string strmap;
        Tile** logic_map;
    public:
        Map(std::string path, const ElementsConfig& elements);
        ~Map();
        const std::string& get_str() const;
        friend std::ostream& operator<<(std::ostream& out, const Map& map);
};

#endif