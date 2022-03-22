#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#include "Entity.hpp"
#include "element/ElementsConfig.hpp"

class Monster : public Entity {
    public:
        Monster(const ElementsConfig& elements);
        ~Monster() override;
        bool canMoveThrough() const override;
};

#endif