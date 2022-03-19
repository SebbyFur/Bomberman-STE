#ifndef _WALL_HPP_
#define _WALL_HPP_

#include "Square.hpp"
#include "config/TilesConfig.hpp"

class Wall : public Square {
    public:
        Wall(TilesConfig& tiles);
        ~Wall() override;
        bool isOpac() const override;
};

#endif