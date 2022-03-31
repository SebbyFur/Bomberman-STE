#ifndef _AIR_HPP_
#define _AIR_HPP_

#include "Square.hpp"
#include "element/ElementsConfig.hpp"

class Air : public Square {
    public:
        Air(Tile* tile);
        ~Air() override;
        const ElementDisplay& getDisplay() const override;
        bool isOpac() const override;
};

#endif