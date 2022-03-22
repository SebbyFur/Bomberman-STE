#include "square/BrokenWall.hpp"

BrokenWall::BrokenWall(const ElementsConfig& elements) : Square(elements["BROKENWALL"]) {
    //
}

BrokenWall::~BrokenWall() {
    //
}

bool BrokenWall::isOpac() const {
    return true;
}