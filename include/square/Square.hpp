#ifndef _SQUARE_HPP_
#define _SQUARE_HPP_

#include "config/TileConfigValue.hpp"
#include <iostream>

class Square {
    protected:
        TileConfigValue& display;
    public:
        Square(TileConfigValue& display);
        friend std::ostream& operator<<(std::ostream& out, Square& square);
};

#endif