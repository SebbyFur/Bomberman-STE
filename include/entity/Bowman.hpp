#ifndef _BOWMAN_HPP_
#define _BOWMAN_HPP_

#include "Entity.hpp"
#include "config/TilesConfig.hpp"

class Bowman : public Entity {
    public:
        Bowman(TilesConfig& tiles);
        ~Bowman() override;
        bool canMoveThrough() const override;
};

#endif