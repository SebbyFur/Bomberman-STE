#ifndef _SCALE_UP_HPP_
#define _SCALE_UP_HPP_

#include "item/Item.hpp"

class ScaleUp : public Item {
    public:
        ScaleUp(Tile* tile);
        ~ScaleUp() override;
        const ElementDisplay& getDisplay() const override;
};

#endif