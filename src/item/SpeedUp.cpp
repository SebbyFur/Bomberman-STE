#include "item/SpeedUp.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

SpeedUp::SpeedUp(Tile* tile) : Item(tile, 0, 1, 0, 0, 0, 0, 0) {
    //
}

SpeedUp::~SpeedUp() {
    //
}

const ElementDisplay& SpeedUp::getDisplay() const {
    return this->tile->getMap()->getConfig()["SPEEDUP"];
}