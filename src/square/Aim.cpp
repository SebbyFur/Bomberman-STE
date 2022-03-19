#include "square/Aim.hpp"

Aim::Aim(TilesConfig& tiles) : Square(tiles["AIM"]) {
    //
}

Aim::~Aim() {
    //
}

bool Aim::isOpac() const {
    return false;
}