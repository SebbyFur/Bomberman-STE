#include "entity/Bomb.hpp"

Bomb::Bomb(TilesConfig& tiles) : Entity(tiles["BOMB"]) {
    //
}

Bomb::~Bomb() {
    //
}

bool Bomb::canMoveThrough() const {
    return false;
}