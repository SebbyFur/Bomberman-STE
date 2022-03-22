#ifndef _UNBREAKABLE_WALL_HPP_
#define _UNBREAKABLE_WALL_HPP_

#include "Square.hpp"
#include "element/ElementsConfig.hpp"

class UnbreakableWall : public Square {
    public:
        UnbreakableWall(const ElementsConfig& elements);
        ~UnbreakableWall() override;
        bool isOpac() const override;
};

#endif