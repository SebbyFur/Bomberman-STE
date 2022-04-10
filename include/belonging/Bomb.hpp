#ifndef _BOMB_HPP_
#define _BOMB_HPP_

#include "belonging/Belonging.hpp"
#include "entity/Entity.hpp"

class Bomb : public Belonging {
    private:
        std::vector<Belonging*> belongings;
        int countdown;
    public:
        Bomb(Tile* tile, Entity* owner);
        ~Bomb() override;
        void explode();
        void setCountDown(int countdown);
        int getCountDown() const;
        bool nextTurn() override;
        const ElementDisplay& getDisplay() const override;
};

#endif