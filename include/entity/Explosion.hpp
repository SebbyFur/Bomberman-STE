#ifndef _EXPLOSION_HPP_
#define _EXPLOSION_HPP_

#include "Entity.hpp"
#include "config/TilesConfig.hpp"

class Explosion : public Entity {
    public:
        Explosion(TilesConfig& tiles);
        ~Explosion() override;
        bool canMoveThrough() const override;
};

#endif