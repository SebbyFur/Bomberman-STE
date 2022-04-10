#ifndef _ITEM_HPP_
#define _ITEM_HPP_

#include "element/Element.hpp"

class Item : public Element {
    protected:
        const int health;
        const int speed;
        const int power;
        const int scale;
        const int bombs;
        const bool control_bombs;
        const bool move_through;
    public:
        Item(Tile* tile, int health, int speed, int power, int scale, int bombs, bool control_bombs, bool move_through);
        ~Item();
        int getHealth() const;
        int getSpeed() const;
        int getPower() const;
        int getScale() const;
        int getBombs() const;
        bool getControlBombs() const;
        bool getMoveThrough() const;
};

#endif