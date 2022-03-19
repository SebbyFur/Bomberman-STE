#include "entity/Ghost.hpp"

Ghost::Ghost(TilesConfig& tiles) : Entity(tiles["GHOST"]) {
    //
}

Ghost::~Ghost() {
    //
}

bool Ghost::canMoveThrough() const {
    return false;
}