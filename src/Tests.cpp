#include <iostream>
#include "Map.hpp"
#include <fstream>

using namespace std;

int main(void) {
    Map map("./maps/map.bbm");
    cout << map << endl;

    return 0;
}