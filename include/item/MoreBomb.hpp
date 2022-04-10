#ifndef _MORE_BOMB_HPP_
#define _MORE_BOMB_HPP_

#include "item/Item.hpp"

class MoreBomb : public Item {
    public:
        MoreBomb(Tile* tile);
        ~MoreBomb() override;
        const ElementDisplay& getDisplay() const override;
};

#endif