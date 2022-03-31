#include "entity/Monster.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

Monster::Monster(Tile* tile) : Entity(tile) {
    //
}

Monster::~Monster() {
    //
}

void Monster::nextTurn() {
    //
}

const ElementDisplay& Monster::getDisplay() const {
    return this->tile->getMap()->getConfig()["MONSTER"];
}

bool Monster::canMoveThrough() const {
    return false;
}