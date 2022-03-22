#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include "Entity.hpp"
#include "element/ElementsConfig.hpp"

class Player : public Entity {
    public:
        Player(const ElementsConfig& elements);
        ~Player() override;
        bool canMoveThrough() const override;
};

#endif