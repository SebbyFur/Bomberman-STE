#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#include "Entity.hpp"
#include "element/ElementsConfig.hpp"

class Monster : public Entity {
    public:
        Monster(Tile* tile);
        ~Monster() override;
        const ElementDisplay& getDisplay() const override;
        void nextTurn() override;
        bool canMoveThrough() const override;
};

#endif