#ifndef _UNBREAKABLE_WALL_HPP_
#define _UNBREAKABLE_WALL_HPP_

#include "Square.hpp"
#include "element/ElementsConfig.hpp"

class UnbreakableWall : public Square {
    public:
        UnbreakableWall(Tile* tile);
        ~UnbreakableWall() override;
        const ElementDisplay& getDisplay() const override;
        bool isOpac() const override;
};

#endif