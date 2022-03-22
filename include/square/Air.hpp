#ifndef _AIR_HPP_
#define _AIR_HPP_

#include "Square.hpp"
#include "element/ElementsConfig.hpp"

class Air : public Square {
    public:
        Air(const ElementsConfig& elements);
        ~Air() override;
        bool isOpac() const override;
};

#endif