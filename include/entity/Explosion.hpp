#ifndef _EXPLOSION_HPP_
#define _EXPLOSION_HPP_

#include "Entity.hpp"
#include "element/ElementsConfig.hpp"

class Explosion : public Entity {
    public:
        Explosion(const ElementsConfig& elements);
        ~Explosion() override;
        bool canMoveThrough() const override;
};

#endif