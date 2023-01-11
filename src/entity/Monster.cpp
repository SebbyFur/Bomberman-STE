#include "entity/Monster.hpp"
#include "element/ElementDisplay.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

Monster::Monster(Tile* tile) : Enemy(tile, 10, 5, 1) {
    //
}

Monster::~Monster() {
    //
}

const ElementDisplay& Monster::getDisplay() const {
    return this->tile->getMap()->getConfig()["MONSTER"];
}

bool Monster::canMoveThrough() const {
    return move_through;
}