#ifndef _ENTITY_HPP_
#define _ENTITY_HPP_

#include <iostream>
#include "element/Element.hpp"
#include "util/Direction.hpp"
#include <vector>

class Belonging;

class Entity : public Element {
    public:
        Entity(Tile* tile);
        virtual ~Entity();
        virtual bool nextTurn() = 0;
};

#endif