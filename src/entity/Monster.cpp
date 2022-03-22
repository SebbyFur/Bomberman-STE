#include "entity/Monster.hpp"

Monster::Monster(const ElementsConfig& elements) : Entity(elements["MONSTER"]) {
    //
}

Monster::~Monster() {
    //
}

bool Monster::canMoveThrough() const {
    return false;
}