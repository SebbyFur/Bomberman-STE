#ifndef _BROKEN_WALL_HPP_
#define _BROKEN_WALL_HPP_

#include "Square.hpp"
#include "config/TilesConfig.hpp"

class BrokenWall : public Square {
    public:
        BrokenWall(TilesConfig& tiles);
        ~BrokenWall() override;
        bool isOpac() const override;
};

#endif