#ifndef _GHOST_HPP_
#define _GHOST_HPP_

#include "Entity.hpp"
#include "element/ElementsConfig.hpp"

class Ghost : public Entity {
    public:
        Ghost(Tile* tile);
        ~Ghost() override;
        void nextTurn() override;
        bool canMoveThrough() const override;
        const ElementDisplay& getDisplay() const override;
};

#endif