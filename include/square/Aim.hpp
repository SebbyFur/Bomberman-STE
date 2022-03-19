#ifndef _AIM_HPP_
#define _AIM_HPP_

#include "Square.hpp"
#include "config/TilesConfig.hpp"

class Aim : public Square {
    public:
        Aim(TilesConfig& tiles);
        ~Aim() override;
        bool isOpac() const override;
};

#endif