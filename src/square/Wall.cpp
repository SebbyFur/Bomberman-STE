#include "square/Wall.hpp"

Wall::Wall(TilesConfig& tiles) : Square(tiles["WALL"]) {
    //
}

Wall::~Wall() {
    //
}

bool Wall::isOpac() const {
    return true;
}