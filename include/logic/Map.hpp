#ifndef _MAP_HPP_
#define _MAP_HPP_

#include "logic/Tile.hpp"
#include "element/ElementsConfig.hpp"
#include "util/Position.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <fstream>

class Map {
    private:
        int width;
        int height;
        int logic_size;
        std::string strmap;
        Tile** logic_map;
        const ElementsConfig& display;
    public:
        Map(std::string path, const ElementsConfig& display);
        ~Map();
        const std::string& get_str() const;
        Tile* getTileAtPos(int x, int y) const;
        Tile* getTileAtPos(const Position pos) const;
        const ElementsConfig& getConfig() const;
        friend std::ostream& operator<<(std::ostream& out, const Map& map);
};

#endif