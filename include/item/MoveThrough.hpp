#ifndef _MOVE_THROUGH_HPP_
#define _MOVE_THROUGH_HPP_

#include "item/Item.hpp"

class MoveThrough : public Item {
    public:
        MoveThrough(Tile* tile);
        ~MoveThrough() override;
        const ElementDisplay& getDisplay() const override;
};

#endif