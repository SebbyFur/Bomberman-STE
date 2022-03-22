#ifndef _ENTITY_HPP_
#define _ENTITY_HPP_

#include <iostream>
#include "element/Element.hpp"
#include "element/ElementDisplay.hpp"
#include "util/Position.hpp"

class Entity : public Element {
    protected:
        Position pos;
    public:
        Entity(const ElementDisplay& display);
        virtual ~Entity();
        virtual bool canMoveThrough() const = 0;
        Position getPos() const;
};

#endif