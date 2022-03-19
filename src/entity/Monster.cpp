#include "entity/Monster.hpp"

Monster::Monster(TilesConfig& tiles) : Entity(tiles["MONSTER"]) {
    //
}

Monster::~Monster() {
    //
}

bool Monster::canMoveThrough() const {
    return false;
}