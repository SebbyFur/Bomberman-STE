#ifndef _ENTITY_HPP_
#define _ENTITY_HPP_

#include <iostream>
#include "element/Element.hpp"
#include "element/ElementDisplay.hpp"
#include "util/Direction.hpp"

class Entity : public Element {
    public:
        Entity(Tile* tile);
        virtual ~Entity();
        int move(const Direction dir);
        virtual bool canMoveThrough() const = 0;
        virtual void nextTurn() = 0;
};

#endif