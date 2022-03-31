#ifndef _ELEMENT_HPP_
#define _ELEMENT_HPP_

#include <iostream>
#include "element/ElementDisplay.hpp"
#include "util/Position.hpp"

class Tile;

class Element {
    protected:
        Tile* tile;
    public:
        Element(Tile* tile);
        virtual ~Element();
        Tile* getTile();
        void setTile(Tile* tile);
        Position getPos() const;
        virtual const ElementDisplay& getDisplay() const = 0;
        friend std::ostream& operator<<(std::ostream& out, const Element& element);
};

#endif