#include "square/Aim.hpp"

Aim::Aim(const ElementsConfig& elements) : Square(elements["AIM"]) {
    //
}

Aim::~Aim() {
    //
}

bool Aim::isOpac() const {
    return false;
}