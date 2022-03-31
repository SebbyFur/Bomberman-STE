#ifndef _TILE_HPP_
#define _TILE_HPP_

#include "entity/Explosion.hpp"
#include "entity/Entity.hpp"
#include "square/Square.hpp"
#include "util/Position.hpp"

class Map;

class Tile {
    private:
        Map* map;
        Explosion* explosion;
        Entity* entity;
        Square* square;
        const Position pos;
    public:
        Tile(Square* square, Entity* entity, Map* map, const Position pos);
        Tile(Map* map, const Position pos);
        ~Tile();
        Position getPos() const;
        Map* getMap() const;
        Entity* getEntity() const;
        Square* getSquare() const;
        void setEntity(Entity* entity);
        void setSquare(Square* square);
        void makeItExplode();
        friend std::ostream& operator<<(std::ostream& out, const Tile& tile);
};

#endif