#ifndef _SQUARE_HPP_
#define _SQUARE_HPP_

#include <iostream>
#include "util/Color.hpp"
#include "config/TileConfigValue.hpp"

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