#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include "entity/Bomber.hpp"

class Player : public Bomber {
    public:
        Player(Tile* tile);
        ~Player() override;
        bool nextTurn() override;
        void placeBomb();
        bool canMoveThrough() const override;
        const ElementDisplay& getDisplay() const override;
};

#endif