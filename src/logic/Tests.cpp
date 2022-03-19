#include "logic/Map.hpp"
#include "logic/Tile.hpp"
#include "util/Position.hpp"
#include "entity/Bomb.hpp"
#include "entity/Explosion.hpp"
#include "square/Square.hpp"
#include "square/Air.hpp"
#include "config/TilesConfig.hpp"
#include <iostream>
#include <string>

int main() {
    TilesConfig c("config.txt");
    Map map("map.txt", c);

    std::cout << map << std::endl;

    return 0;
}