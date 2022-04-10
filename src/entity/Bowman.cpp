#include "entity/Bowman.hpp"
#include "element/ElementDisplay.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

Bowman::Bowman(Tile* tile) : Enemy(tile, 5, 4, 1) {
    //
}

Bowman::~Bowman() {
    //
}

const ElementDisplay& Bowman::getDisplay() const {
    return this->tile->getMap()->getConfig()["BOWMAN"];
}

bool Bowman::canMoveThrough() const {
    return move_through;
}