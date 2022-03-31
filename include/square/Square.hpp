#ifndef _SQUARE_HPP_
#define _SQUARE_HPP_

#include <iostream>
#include "element/Element.hpp"
#include "element/ElementDisplay.hpp"

class Square : public Element {
    public:
        Square(Tile* tile);
        virtual ~Square();
        virtual bool isOpac() const = 0;
};

#endif