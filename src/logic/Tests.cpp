#include "logic/Map.hpp"
#include "util/Direction.hpp"
#include "element/ElementsConfig.hpp"
#include <string>
#include <iostream>

int main() {
    ElementsConfig c("config.txt");
    Map map("map.txt", c);

    std::cout << map << std::endl;

    std::cin.ignore();

    return 0;
}