#include "util/Position.hpp"
#include <cmath>
#include <string>
#define PI 3.14159265358979323846

Position::Position(int x, int y) : x(x), y(y) {
    //
}

int Position::getX() const {
    return this->x;
}

int Position::getY() const {
    return this->y;
}

double Position::distance(const Position& pos, const Position& pos2) {
    return sqrt(pow(1.0 * pos.x - 1.0 * pos2.x, 2) + pow(1.0 * pos.y - 1.0 * pos2.y, 2));
}

double Position::angle(const Position& pos, const Position& pos2) {
    return (180 * atan2(pos.x - pos2.x, pos.y - pos2.y)) / PI;
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