#ifndef _WALL_HPP_
#define _WALL_HPP_

#include "Square.hpp"
#include "element/ElementsConfig.hpp"

class Wall : public Square {
    public:
        Wall(const ElementsConfig& elements);
        ~Wall() override;
        bool isOpac() const override;
};

#endif