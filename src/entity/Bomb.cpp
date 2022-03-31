#include "entity/Bomb.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

Bomb::Bomb(Tile* tile) : Entity(tile) {
    //
}

Bomb::~Bomb() {
    //
}

void Bomb::explode() {
    Map* map = tile->getMap();
    Position pos = getPos();

    for (auto& x : {Direction::NORTH, Direction::EAST, Direction::SOUTH, Direction::WEST}) {
        pos = getPos();
        pos += x;
        Tile* next_tile = map->getTileAtPos(pos);

        while (next_tile != NULL && !next_tile->getSquare()->isOpac()) {
            next_tile->makeItExplode();
            pos += x;
            next_tile = map->getTileAtPos(pos);
        }
    }
}

const ElementDisplay& Bomb::getDisplay() const {
    return this->tile->getMap()->getConfig()["BOMB"];
}

void Bomb::nextTurn() {
    this->explode();
}

bool Bomb::canMoveThrough() const {
    return false;
}