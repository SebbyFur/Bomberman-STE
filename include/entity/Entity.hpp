#ifndef _ENTITY_HPP_
#define _ENTITY_HPP_

#include "config/TileConfigValue.hpp"
#include "util/Position.hpp"
#include <iostream>

class Entity {
    protected:
        TileConfigValue& display;
        Position pos;
    public:
        Entity(TileConfigValue& display);
        virtual ~Entity();
        friend std::ostream& operator<<(std::ostream& out, Entity& entity);
        virtual bool canMoveThrough() const = 0;
        Position getPos() const;
};

#endif