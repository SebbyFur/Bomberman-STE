#ifndef _TILE_HPP_
#define _TILE_HPP_

#include "entity/Explosion.hpp"
#include "entity/Entity.hpp"
#include "square/Square.hpp"

class Tile {
    private:
        Explosion* explosion;
        Entity* entity;
        Square* square;
    public:
        Tile(Square* square);
        int canPassThrough() const;
        Explosion* getExplosion() const;
        Entity* getEntity() const;
        Square* getSquare() const;
        void setExplosion(Explosion* explosion);
        void setEntity(Entity* entity);
        void setSquare(Square* square);
};

#endif