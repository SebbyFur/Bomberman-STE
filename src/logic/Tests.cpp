#include "logic/Map.hpp"
#include "util/Position.hpp"
#include "entity/Bomb.hpp"
#include "entity/Explosion.hpp"
#include "square/Air.hpp"
#include "config/TilesConfig.hpp"
#include <iostream>
#include <fstream>
#include <map>
#include <memory>

int main() {
    TilesConfig c("config.txt");

    Bomb b(c);
    Explosion d(c);
    Air e(c);

    std::cout << b << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;

    return 0;
}