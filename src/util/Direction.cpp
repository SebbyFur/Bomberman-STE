#include "util/Direction.hpp"
#include "util/Position.hpp"

Direction::Direction() : Direction(0, 0) {
    //
}

Direction::Direction(const int x, const int y) : x(x), y(y) {
    //
}

const Direction& Direction::getDirection(const std::string dir) {
    return Direction::directions.at(dir);
}

const Direction& Direction::getDirection(char dir) {
    return Direction::char_dir.at(dir);
}

const int& Direction::getX() const {
    return x;
}

const int& Direction::getY() const {
    return y;
}

const Direction& Direction::getDirection(const Position& pos, const Position& pos2) {
    double angle = Position::angle(pos, pos2);
    Direction dir;

    if (angle >= -135 && angle < -45) {
        return Direction::SOUTH;
    } else if (angle >= -45 && angle < 45) {
        return Direction::WEST;
    } else if (angle >= 45 && angle < 135) {
        return Direction::NORTH;
    }

    return Direction::EAST;
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

const std::map<const char, const Direction&> Direction::char_dir = {
    {'8', Direction::NORTH},
    {'6', Direction::EAST},
    {'2', Direction::SOUTH},
    {'4', Direction::WEST}
};

Direction operator*(const Direction& dir, int mul) {
    return Direction(dir.getX() * mul, dir.getY() * mul);
}