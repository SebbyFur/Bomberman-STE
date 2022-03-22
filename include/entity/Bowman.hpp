#ifndef _BOWMAN_HPP_
#define _BOWMAN_HPP_

#include "Entity.hpp"
#include "element/ElementsConfig.hpp"

class Bowman : public Entity {
    public:
        Bowman(const ElementsConfig& elements);
        ~Bowman() override;
        bool canMoveThrough() const override;
};

#endif