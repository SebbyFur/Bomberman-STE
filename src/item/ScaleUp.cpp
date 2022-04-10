#include "item/ScaleUp.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

ScaleUp::ScaleUp(Tile* tile) : Item(tile, 0, 0, 0, 1, 0, 0, 0) {
    //
}

ScaleUp::~ScaleUp() {
    //
}

const ElementDisplay& ScaleUp::getDisplay() const {
    return this->tile->getMap()->getConfig()["SCALEUP"];
}