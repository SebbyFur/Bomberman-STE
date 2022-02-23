#include <iostream>
#include "Map.hpp"
#include "Config.hpp"
#include "TileConfig.hpp"
#include <fstream>


int main(void) {
    Config c("config.txt");

    std::map<std::string, TileConfig>* b = c.getTiles();

    std::cout << (*b)["PLAYER"] << std::endl;

    return 0;
}