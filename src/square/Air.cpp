#include "square/Air.hpp"

Air::Air(const ElementsConfig& elements) : Square(elements["AIR"]) {
    //
}

Air::~Air() {
    //
}

bool Air::isOpac() const {
    return false;
}