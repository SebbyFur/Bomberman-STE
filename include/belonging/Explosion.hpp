#ifndef _EXPLOSION_HPP_
#define _EXPLOSION_HPP_

#include "belonging/Belonging.hpp"
#include "entity/Entity.hpp"

class Explosion : public Belonging {
    public:
        Explosion(Tile* tile, Entity* owner);
        ~Explosion() override;
        bool nextTurn() override;
        const ElementDisplay& getDisplay() const override;
};

#endif