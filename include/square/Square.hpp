#ifndef _SQUARE_HPP_
#define _SQUARE_HPP_

#include "config/TileConfigValue.hpp"
#include <iostream>

class Square {
    protected:
        TileConfigValue& display;
    public:
        Square(TileConfigValue& display);
        virtual ~Square();
        friend std::ostream& operator<<(std::ostream& out, Square& square);
        virtual bool isOpac() const = 0;
};

#endif