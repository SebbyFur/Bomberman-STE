#ifndef _EXPLOSION_HPP_
#define _EXPLOSION_HPP_

#include "Entity.hpp"
#include "element/ElementsConfig.hpp"

class Explosion : public Entity {
    public:
        Explosion(Tile* tile);
        ~Explosion() override;
        const ElementDisplay& getDisplay() const override;
        void nextTurn() override;
        bool canMoveThrough() const override;
};

#endif