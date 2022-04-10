#ifndef _POWER_UP_HPP_
#define _POWER_UP_HPP_

#include "item/Item.hpp"

class PowerUp : public Item {
    public:
        PowerUp(Tile* tile);
        ~PowerUp() override;
        const ElementDisplay& getDisplay() const override;
};

#endif