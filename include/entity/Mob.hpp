#ifndef _MOB_HPP_
#define _MOB_HPP_

#include "entity/Entity.hpp"
#include "item/Item.hpp"

class Mob : public Entity {
    protected:
        std::vector<Belonging*> belongings;
        int health;
        int power;
        int speed;
        bool move_through;
    public:
        Mob(Tile* tile);
        Mob(Tile* tile, int health, int power, int speed);
        ~Mob();
        int move(const Direction dir);
        virtual bool canMoveThrough() const = 0;
        int getHealth() const;
        int getPower() const;
        int getSpeed() const;
        bool getMoveThrough() const;
        virtual std::string getStr() const;
        void setHealth(int health);
        void setPower(int power);
        void setSpeed(int speed);
        void setMoveThrough(bool move_through);
        void getAttacked(const Mob& mob);
        virtual void operator+=(const Item& item);
        friend std::ostream& operator<<(std::ostream& out, const Mob& mob);
};

#endif