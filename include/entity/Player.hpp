#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include "Entity.hpp"
#include "config/TilesConfig.hpp"

class Player : public Entity {
    public:
        Player(TilesConfig& tiles);
        ~Player() override;
        bool canMoveThrough() const override;
};

#endif