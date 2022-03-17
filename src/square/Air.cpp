#include "square/Air.hpp"

Air::Air(TilesConfig& tiles) : Square(tiles["AIR"]) {
    //
}

Air::~Air() {
    //
}

bool Air::isOpac() const {
    return false;
}