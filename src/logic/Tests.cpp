#include "logic/System.hpp"
#include <string>
#include <iostream>

int main() {
    System system("map.txt", "config.txt");
    system.startSystem();

    return 0;
}