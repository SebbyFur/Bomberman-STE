#include "item/MoreBomb.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

MoreBomb::MoreBomb(Tile* tile) : Item(tile, 0, 0, 0, 0, 1, 0, 0) {
    //
}

MoreBomb::~MoreBomb() {
    //
}

const ElementDisplay& MoreBomb::getDisplay() const {
    return this->tile->getMap()->getConfig()["MOREBOMB"];
}