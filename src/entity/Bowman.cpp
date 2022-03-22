#include "entity/Bowman.hpp"

Bowman::Bowman(const ElementsConfig& elements) : Entity(elements["BOWMAN"]) {
    //
}

Bowman::~Bowman() {
    //
}

bool Bowman::canMoveThrough() const {
    return false;
}