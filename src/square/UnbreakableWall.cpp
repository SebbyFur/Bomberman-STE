#include "square/UnbreakableWall.hpp"

UnbreakableWall::UnbreakableWall(const ElementsConfig& elements) : Square(elements["UNBREAKABLEWALL"]) {
    //
}

UnbreakableWall::~UnbreakableWall() {
    //
}

bool UnbreakableWall::isOpac() const {
    return true;
}