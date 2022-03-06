#ifndef _AIR_HPP_
#define _AIR_HPP_

#include "Square.hpp"
#include "config/TilesConfig.hpp"

class Air : public Square {
    public:
        Air(TilesConfig& tiles);
};

#endif