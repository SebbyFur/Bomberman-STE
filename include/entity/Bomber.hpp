#ifndef _BOMBER_HPP_
#define _BOMBER_HPP_

#include "entity/Mob.hpp"

class Bomber : public Mob {
    protected:
        int scale;
        int bombs;
        int bombs_left;
        bool control_bombs;
    public:
        Bomber(Tile* tile);
        ~Bomber();
        int getScale() const;
        int getBombs() const;
        std::string getStr() const override;
        void setScale(int scale);
        void setBombs(int bombs);
        void addBombsLeft(int bombs);
        void operator+=(const Item& item) override;
};

#endif