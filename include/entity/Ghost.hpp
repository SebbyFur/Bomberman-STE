#ifndef _GHOST_HPP_
#define _GHOST_HPP_

#include "Entity.hpp"
#include "element/ElementsConfig.hpp"

class Ghost : public Entity {
    public:
        Ghost(const ElementsConfig& elements);
        ~Ghost() override;
        bool canMoveThrough() const override;
};

#endif