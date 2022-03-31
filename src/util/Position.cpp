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

Position Position::operator+(const Direction& dir) {
    return Position(x + dir.getX(), y + dir.getY());
}

void Position::operator+=(const Direction& dir) {
    x += dir.getX();
    y += dir.getY();
}

std::string Position::to_str() const {
    return "x: " + std::to_string(x) + " y: " + std::to_string(y);
}

std::ostream& operator<<(std::ostream& out, const Position& pos) {
    out << pos.to_str();
    return out;
}