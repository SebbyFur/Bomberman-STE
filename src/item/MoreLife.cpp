#include "item/MoreLife.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

MoreLife::MoreLife(Tile* tile) : Item(tile, 10, 0, 0, 0, 0, 0, 0) {
    //
}

MoreLife::~MoreLife() {
    //
}

const ElementDisplay& MoreLife::getDisplay() const {
    return this->tile->getMap()->getConfig()["MORELIFE"];
}