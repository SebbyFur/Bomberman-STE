#include "entity/Bowman.hpp"

Bowman::Bowman(TilesConfig& tiles) : Entity(tiles["BOWMAN"]) {
    //
}

Bowman::~Bowman() {
    //
}

bool Bowman::canMoveThrough() const {
    return false;
}