#include "item/ControlBombs.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

ControlBombs::ControlBombs(Tile* tile) : Item(tile, 0, 0, 0, 0, 0, 1, 0) {
    //
}

ControlBombs::~ControlBombs() {
    //
}

const ElementDisplay& ControlBombs::getDisplay() const {
    return this->tile->getMap()->getConfig()["CONTROLBOMBS"];
}