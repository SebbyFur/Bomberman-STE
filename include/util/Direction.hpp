#ifndef _DIRECTION_HPP_
#define _DIRECTION_HPP_

#include <string>
#include <map>

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
        static const Direction& getDirection(std::string Direction);
        const int& getX() const;
        const int& getY() const;
};

#endif