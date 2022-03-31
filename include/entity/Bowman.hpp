#ifndef _BOWMAN_HPP_
#define _BOWMAN_HPP_

#include "Entity.hpp"
#include "element/ElementsConfig.hpp"

class Bowman : public Entity {
    public:
        Bowman(Tile* tile);
        ~Bowman() override;
        void nextTurn() override;
        const ElementDisplay& getDisplay() const override;
        bool canMoveThrough() const override;
};

#endif