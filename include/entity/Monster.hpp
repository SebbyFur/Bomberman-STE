#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#include "Entity.hpp"
#include "config/TilesConfig.hpp"

class Monster : public Entity {
    public:
        Monster(TilesConfig& tiles);
        ~Monster() override;
        bool canMoveThrough() const override;
};

#endif