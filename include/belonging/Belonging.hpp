#ifndef _BELONGING_HPP_
#define _BELONGING_HPP_

#include "belonging/Belonging.hpp"
#include "entity/Entity.hpp"

class Belonging : public Entity {
    protected:
        Entity* owner;
    public:
        Belonging(Tile* tile, Entity* owner);
        ~Belonging();
        Entity* getOwner() const;
};

#endif