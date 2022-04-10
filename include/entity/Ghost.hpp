#ifndef _GHOST_HPP_
#define _GHOST_HPP_

#include "entity/Enemy.hpp"

class Ghost : public Enemy {
    public:
        Ghost(Tile* tile);
        ~Ghost() override;
        bool canMoveThrough() const override;
        const ElementDisplay& getDisplay() const override;
};

#endif