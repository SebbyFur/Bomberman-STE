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

bool Aim::isDestroyable() const {
    return false;
}

void Aim::destroy() {
    //
}

bool Aim::isOpac() const {
    return false;
}