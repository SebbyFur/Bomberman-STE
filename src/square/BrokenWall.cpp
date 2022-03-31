#include "square/BrokenWall.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

BrokenWall::BrokenWall(Tile* tile) : Square(tile) {
    //
}

BrokenWall::~BrokenWall() {
    //
}

const ElementDisplay& BrokenWall::getDisplay() const {
    return this->tile->getMap()->getConfig()["BROKENWALL"];
}

bool BrokenWall::isOpac() const {
    return true;
}