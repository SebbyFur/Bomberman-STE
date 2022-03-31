#ifndef _WALL_HPP_
#define _WALL_HPP_

#include "Square.hpp"
#include "element/ElementsConfig.hpp"

class Wall : public Square {
    public:
        Wall(Tile* tile);
        ~Wall() override;
        const ElementDisplay& getDisplay() const override;
        bool isOpac() const override;
};

#endif