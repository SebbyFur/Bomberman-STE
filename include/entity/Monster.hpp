#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#include "entity/Enemy.hpp"

class Monster : public Enemy {
    public:
        Monster(Tile* tile);
        ~Monster() override;
        const ElementDisplay& getDisplay() const override;
        bool canMoveThrough() const override;
};

#endif