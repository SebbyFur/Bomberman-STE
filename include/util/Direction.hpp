#ifndef _DIRECTION_HPP_
#define _DIRECTION_HPP_

#include <string>
#include <map>

class Position;

class Direction {
    private:
        Direction();
        Direction(const int x, const int y);
        const int x;
        const int y;
    public:
        static const Direction NORTH;
        static const Direction EAST;
        static const Direction SOUTH;
        static const Direction WEST;

        static const std::map<const std::string, const Direction&> directions;
        static const std::map<const char, const Direction&> char_dir;
        static const Direction& getDirection(const std::string dir);
        static const Direction& getDirection(char dir);
        static const Direction& getDirection(const Position& pos, const Position& pos2);
        const int& getX() const;
        const int& getY() const;
        friend Direction operator*(const Direction& dir, int mul);
};

#endif