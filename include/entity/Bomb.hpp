#ifndef _BOMB_HPP_
#define _BOMB_HPP_

#include "Entity.hpp"
#include "element/ElementsConfig.hpp"

class Bomb : public Entity {
    public:
        Bomb(const ElementsConfig& elements);
        ~Bomb() override;
        bool canMoveThrough() const override;
};

#endif