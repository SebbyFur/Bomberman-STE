#include "square/Wall.hpp"

Wall::Wall(const ElementsConfig& elements) : Square(elements["WALL"]) {
    //
}

Wall::~Wall() {
    //
}

bool Wall::isOpac() const {
    return true;
}