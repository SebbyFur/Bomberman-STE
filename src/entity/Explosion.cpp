#include "entity/Explosion.hpp"

Explosion::Explosion(const ElementsConfig& elements) : Entity(elements["EXPLOSION"]) {
    //
}

Explosion::~Explosion() {
    //
}

bool Explosion::canMoveThrough() const {
    return false;
}