#ifndef _BOWMAN_HPP_
#define _BOWMAN_HPP_

#include "entity/Enemy.hpp"

class Bowman : public Enemy {
    public:
        Bowman(Tile* tile);
        ~Bowman() override;
        const ElementDisplay& getDisplay() const override;
        bool canMoveThrough() const override;
};

#endif