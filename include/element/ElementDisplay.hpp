#ifndef _ELEMENT_DISPLAY_HPP_
#define _ELEMENT_DISPLAY_HPP_

#include <iostream>
#include "element/ElementDisplay.hpp"
#include "util/Color.hpp"

class ElementDisplay {
    protected:
        const char ch;
        const Color& color;
    public:
        ElementDisplay(const char ch, const Color& color);
        friend std::ostream& operator<<(std::ostream& out, const ElementDisplay& disp);
};

#endif