#include "entity/Ghost.hpp"
#include "element/ElementDisplay.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"
#include "util/Direction.hpp"
#include "util/Random.hpp"

Ghost::Ghost(Tile* tile) : Enemy(tile, 10, 3, 1) {
    move_through = true;
}

Ghost::~Ghost() {
    //
}

const ElementDisplay& Ghost::getDisplay() const {
    return this->tile->getMap()->getConfig()["GHOST"];
}

bool Ghost::canMoveThrough() const {
    return move_through;
}