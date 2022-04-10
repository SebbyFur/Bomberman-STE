#ifndef _CONTROL_BOMBS_HPP_
#define _CONTROL_BOMBS_HPP_

#include "item/Item.hpp"

class ControlBombs : public Item {
    public:
        ControlBombs(Tile* tile);
        ~ControlBombs() override;
        const ElementDisplay& getDisplay() const override;
};

#endif