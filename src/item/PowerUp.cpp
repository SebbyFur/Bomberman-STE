#include "item/PowerUp.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

PowerUp::PowerUp(Tile* tile) : Item(tile, 0, 0, 3, 0, 0, 0, 0) {
    //
}

PowerUp::~PowerUp() {
    //
}

const ElementDisplay& PowerUp::getDisplay() const {
    return this->tile->getMap()->getConfig()["POWERUP"];
}