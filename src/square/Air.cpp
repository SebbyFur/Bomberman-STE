#include "square/Air.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

Air::Air(Tile* tile) : Square(tile) {
    //
}

Air::~Air() {
    //
}

const ElementDisplay& Air::getDisplay() const {
    return this->tile->getMap()->getConfig()["AIR"];
}

bool Air::isOpac() const {
    return false;
}