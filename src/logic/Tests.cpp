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
    Bomb bomb(c);
    Air air(c);
    Tile tile(&air);
    tile.setEntity(&bomb);

    std::cout << tile.canPassThrough() << std::endl;

    return 0;
}