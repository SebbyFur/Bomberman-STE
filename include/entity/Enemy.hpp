#ifndef _ENEMY_HPP_
#define _ENEMY_HPP_

#include "entity/Mob.hpp"

class Enemy : public Mob {
    protected:
        int cooldown;
    public:
        Enemy(Tile* tile);
        Enemy(Tile* tile, int health, int power, int speed);
        ~Enemy();
        bool nextTurn() override;
};

#endif