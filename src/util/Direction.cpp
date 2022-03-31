#include "util/Direction.hpp"

Direction::Direction() : Direction(0, 0) {
    //
}

Direction::Direction(const int x, const int y) : x(x), y(y) {
    //
}

const Direction& Direction::getDirection(const std::string dir) {
    return Direction::directions.at(dir);
}

const int& Direction::getX() const {
    return x;
}

const int& Direction::getY() const {
    return y;
}

const Direction Direction::NORTH = Direction(-1, 0);
const Direction Direction::EAST = Direction(0, 1);
const Direction Direction::SOUTH = Direction(1, 0);
const Direction Direction::WEST = Direction(0, -1);

const std::map<const std::string, const Direction&> Direction::directions = {
    {"NORTH", Direction::NORTH},
    {"EAST", Direction::EAST},
    {"SOUTH", Direction::SOUTH},
    {"WEST", Direction::WEST}
};