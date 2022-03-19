#include "square/BrokenWall.hpp"

BrokenWall::BrokenWall(TilesConfig& tiles) : Square(tiles["BROKENWALL"]) {
    //
}

BrokenWall::~BrokenWall() {
    //
}

bool BrokenWall::isOpac() const {
    return true;
}