#ifndef _ENTITY_HPP_
#define _ENTITY_HPP_

#include "config/TileConfigValue.hpp"
#include <iostream>

class Entity {
    protected:
        TileConfigValue& display;
    public:
        Entity(TileConfigValue& display);
        friend std::ostream& operator<<(std::ostream& out, Entity& entity);
};

#endif