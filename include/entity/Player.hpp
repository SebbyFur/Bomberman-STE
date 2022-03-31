#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include "Entity.hpp"
#include "element/ElementsConfig.hpp"

class Player : public Entity {
    public:
        Player(Tile* tile);
        ~Player() override;
        const ElementDisplay& getDisplay() const override;
        void nextTurn() override;
        bool canMoveThrough() const override;
};

#endif