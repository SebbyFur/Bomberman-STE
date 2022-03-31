#include "entity/Entity.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

Entity::Entity(Tile* tile) : Element(tile) {
    //
}

Entity::~Entity() {
    //
}

int Entity::move(const Direction dir) {
    Map* map = tile->getMap();
    Position next_pos = this->getPos() + dir;

    Tile* next_tile = map->getTileAtPos(next_pos);
    if (next_tile != NULL && next_tile->getEntity() == NULL && (!next_tile->getSquare()->isOpac() || canMoveThrough())) {
        map->getTileAtPos(getPos())->setEntity(NULL);
        this->tile = next_tile;
        next_tile->setEntity(this);
    }

    return 1;
}