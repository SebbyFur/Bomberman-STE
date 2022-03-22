#include "entity/Bomb.hpp"

Bomb::Bomb(const ElementsConfig& elements) : Entity(elements["BOMB"]) {
    //
}

Bomb::~Bomb() {
    //
}

bool Bomb::canMoveThrough() const {
    return false;
}