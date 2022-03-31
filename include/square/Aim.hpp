#ifndef _AIM_HPP_
#define _AIM_HPP_

#include "Square.hpp"
#include "element/ElementsConfig.hpp"

class Aim : public Square {
    public:
        Aim(Tile* tile);
        ~Aim() override;
        const ElementDisplay& getDisplay() const override;
        bool isOpac() const override;
};

#endif