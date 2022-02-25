#include <iostream>
#include "Map.hpp"
#include "Config.hpp"
#include "TileConfig.hpp"
#include <fstream>



int main(void) {
    Config c("config.txt");

    std::map<std::string, TileConfig>* b = c.getTiles();

    for (std::map<std::string, TileConfig>::iterator it=b->begin(); it!=b->end(); ++it)
    std::cout << it->first << " => " << (it->second).getChar() << '\n';

    return 0;
}