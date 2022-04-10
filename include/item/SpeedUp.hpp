#ifndef _SPEED_UP_HPP_
#define _SPEED_UP_HPP_

#include "item/Item.hpp"

class SpeedUp : public Item {
    public:
        SpeedUp(Tile* tile);
        ~SpeedUp() override;
        const ElementDisplay& getDisplay() const override;
};

#endif