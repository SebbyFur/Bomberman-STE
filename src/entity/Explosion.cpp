#include "entity/Explosion.hpp"

Explosion::Explosion(TilesConfig& tiles) : Entity(tiles["EXPLOSION"]) {
    //
}

Explosion::~Explosion() {
    //
}

bool Explosion::canMoveThrough() const {
    return false;
}