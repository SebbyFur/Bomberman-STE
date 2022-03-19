#ifndef _UNBREAKABLE_WALL_HPP_
#define _UNBREAKABLE_WALL_HPP_

#include "Square.hpp"
#include "config/TilesConfig.hpp"

class UnbreakableWall : public Square {
    public:
        UnbreakableWall(TilesConfig& tiles);
        ~UnbreakableWall() override;
        bool isOpac() const override;
};

#endif