#ifndef _GHOST_HPP_
#define _GHOST_HPP_

#include "Entity.hpp"
#include "config/TilesConfig.hpp"

class Ghost : public Entity {
    public:
        Ghost(TilesConfig& tiles);
        ~Ghost() override;
        bool canMoveThrough() const override;
};

#endif