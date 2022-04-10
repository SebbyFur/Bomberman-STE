#ifndef _TILE_HPP_
#define _TILE_HPP_

#include "entity/Entity.hpp"
#include "square/Square.hpp"
#include "item/Item.hpp"
#include "belonging/Explosion.hpp"
#include "belonging/Bomb.hpp"
#include "util/Position.hpp"

class Map;

class Tile {
    private:
        Map* map;
        Explosion* explosion;
        Bomb* bomb;
        Entity* entity;
        Square* square;
        Item* item;
        const Position pos;
    public:
        Tile(Square* square, Entity* entity, Map* map, const Position pos);
        Tile(Map* map, const Position pos);
        ~Tile();
        Position getPos() const;
        Map* getMap() const;
        Entity* getEntity() const;
        Square* getSquare() const;
        Item* getItem() const;
        Explosion* getExplosion() const;
        Bomb* getBomb() const;
        void setEntity(Entity* entity);
        void setSquare(Square* square);
        void setItem(Item* item);
        void setExplosion(Explosion* explosion);
        void setBomb(Bomb* bomb);
        friend std::ostream& operator<<(std::ostream& out, const Tile& tile);
};

#endif