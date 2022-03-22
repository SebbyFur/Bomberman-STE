#include "logic/Map.hpp"
#include "element/ElementsConfig.hpp"
#include <string>
#include <iostream>

int main() {
    //std::string a("AIM = X WHITE\nBOMB = O RED\nBOWMAN = B WHITE\nBROKENWALL = w WHITE\nEXPLOSION = @ BOLDYELLOW\nGHOST = G WHITE\nMONSTER = M WHITE\nMOREBOMB = E WHITE\nMORELIFE = L WHITE\nPLAYER = P WHITE\nPOWERUP = U WHITE\nSCALEUP = R RED\nAIR = _ WHITE\nSPEEDUP = S WHITE\nUNBREAKABLEWALL = I WHITE\nWALL = W WHITE");
    ElementsConfig c("config.txt");
    Map map("map.txt", c);

    std::cout << map << std::endl;

    return 0;
}