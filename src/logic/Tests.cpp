#include "logic/Map.hpp"
#include "util/Position.hpp"
#include "entity/Bomb.hpp"
#include "entity/Explosion.hpp"
#include "square/Square.hpp"
#include "square/Air.hpp"
#include "config/TilesConfig.hpp"
#include <iostream>
#include <fstream>
#include <map>
#include <typeinfo>
#include <memory>

int main() {
    TilesConfig c("config.txt");
    Map a("map.txt");

    std::cout << a << std::endl;

    return 0;
}