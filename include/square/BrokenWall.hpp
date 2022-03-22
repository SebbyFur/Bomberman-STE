#ifndef _BROKEN_WALL_HPP_
#define _BROKEN_WALL_HPP_

#include "Square.hpp"
#include "element/ElementsConfig.hpp"

class BrokenWall : public Square {
    public:
        BrokenWall(const ElementsConfig& elements);
        ~BrokenWall() override;
        bool isOpac() const override;
};

#endif