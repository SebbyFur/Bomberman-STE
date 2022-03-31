#include "entity/Ghost.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

Ghost::Ghost(Tile* tile) : Entity(tile) {
    //
}

Ghost::~Ghost() {
    //
}

void Ghost::nextTurn() {
    //
}

const ElementDisplay& Ghost::getDisplay() const {
    return this->tile->getMap()->getConfig()["GHOST"];
}

bool Ghost::canMoveThrough() const {
    return true;
}