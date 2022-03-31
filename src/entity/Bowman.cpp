#include "entity/Bowman.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

Bowman::Bowman(Tile* tile) : Entity(tile) {
    //
}

Bowman::~Bowman() {
    //
}

void Bowman::nextTurn() {
    //
}

const ElementDisplay& Bowman::getDisplay() const {
    return this->tile->getMap()->getConfig()["BOWMAN"];
}

bool Bowman::canMoveThrough() const {
    return false;
}