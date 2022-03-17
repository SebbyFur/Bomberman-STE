#ifndef _BOMB_HPP_
#define _BOMB_HPP_

#include "Entity.hpp"
#include "config/TilesConfig.hpp"

class Bomb : public Entity {
    public:
        Bomb(TilesConfig& tiles);
        ~Bomb() override;
        bool canMoveThrough() const override;
};

#endif