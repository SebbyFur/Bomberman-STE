#include "entity/Explosion.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

Explosion::Explosion(Tile* tile) : Entity(tile) {
    //
}

Explosion::~Explosion() {
    //
}

void Explosion::nextTurn() {
    //
}

const ElementDisplay& Explosion::getDisplay() const {
    return this->tile->getMap()->getConfig()["EXPLOSION"];
}

bool Explosion::canMoveThrough() const {
    return false;
}