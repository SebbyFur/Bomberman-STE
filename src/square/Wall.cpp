#include "square/Wall.hpp"
#include "square/BrokenWall.hpp"
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

bool Wall::isDestroyable() const {
    return true;
}

void Wall::destroy() {
    tile->setSquare(new BrokenWall(tile));
    delete this;
}

bool Wall::isOpac() const {
    return true;
}