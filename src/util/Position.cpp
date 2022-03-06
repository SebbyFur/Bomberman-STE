#include "util/Position.hpp"
#include <string>

Position::Position(int x, int y) : x(x), y(y) {
    //
}

int Position::getX() const {
    return this->x;
}

int Position::getY() const {
    return this->y;
}

std::ostream& operator<<(std::ostream& out, const Position& pos) {
    out << "x: " + std::to_string(pos.x) + " y: " + std::to_string(pos.y);
    return out;
}