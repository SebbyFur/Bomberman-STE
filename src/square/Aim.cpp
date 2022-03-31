#include "square/Aim.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

Aim::Aim(Tile* tile) : Square(tile) {
    //
}

Aim::~Aim() {
    //
}

const ElementDisplay& Aim::getDisplay() const {
    return this->tile->getMap()->getConfig()["AIM"];
}

bool Aim::isOpac() const {
    return false;
}