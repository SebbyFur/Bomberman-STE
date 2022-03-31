#include "square/UnbreakableWall.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

UnbreakableWall::UnbreakableWall(Tile* tile) : Square(tile) {
    //
}

UnbreakableWall::~UnbreakableWall() {
    //
}

const ElementDisplay& UnbreakableWall::getDisplay() const {
    return this->tile->getMap()->getConfig()["UNBREAKABLEWALL"];
}

bool UnbreakableWall::isOpac() const {
    return true;
}