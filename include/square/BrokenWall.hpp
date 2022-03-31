#ifndef _BROKEN_WALL_HPP_
#define _BROKEN_WALL_HPP_

#include "Square.hpp"
#include "element/ElementsConfig.hpp"

class BrokenWall : public Square {
    public:
        BrokenWall(Tile* tile);
        ~BrokenWall() override;
        const ElementDisplay& getDisplay() const override;
        bool isOpac() const override;
};

#endif