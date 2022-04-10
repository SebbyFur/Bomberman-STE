#ifndef _MORE_LIFE_HPP_
#define _MORE_LIFE_HPP_

#include "item/Item.hpp"

class MoreLife : public Item {
    public:
        MoreLife(Tile* tile);
        ~MoreLife() override;
        const ElementDisplay& getDisplay() const override;
};

#endif