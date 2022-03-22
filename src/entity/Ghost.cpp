#include "entity/Ghost.hpp"

Ghost::Ghost(const ElementsConfig& elements) : Entity(elements["GHOST"]) {
    //
}

Ghost::~Ghost() {
    //
}

bool Ghost::canMoveThrough() const {
    return true;
}