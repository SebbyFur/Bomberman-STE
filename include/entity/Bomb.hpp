#ifndef _BOMB_HPP_
#define _BOMB_HPP_

#include "entity/Entity.hpp"
#include "element/ElementsConfig.hpp"

class Bomb : public Entity {
    public:
        Bomb(Tile* tile);
        ~Bomb() override;
        void explode();
        void nextTurn() override;
        const ElementDisplay& getDisplay() const override;
        bool canMoveThrough() const override;
};

#endif