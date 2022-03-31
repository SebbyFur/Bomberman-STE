#include "square/Wall.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

Wall::Wall(Tile* tile) : Square(tile) {
    //
}

Wall::~Wall() {
    //
}

const ElementDisplay& Wall::getDisplay() const {
    return this->tile->getMap()->getConfig()["WALL"];
}

bool Wall::isOpac() const {
    return true;
}