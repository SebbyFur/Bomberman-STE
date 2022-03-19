#include "square/UnbreakableWall.hpp"

UnbreakableWall::UnbreakableWall(TilesConfig& tiles) : Square(tiles["UNBREAKABLEWALL"]) {
    //
}

UnbreakableWall::~UnbreakableWall() {
    //
}

bool UnbreakableWall::isOpac() const {
    return true;
}