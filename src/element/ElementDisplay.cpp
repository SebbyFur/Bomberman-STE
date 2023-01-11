#include "element/ElementDisplay.hpp"
#include <iostream>

ElementDisplay::ElementDisplay(const char ch, Color& color) : ch(ch), color(color) {
    //
}

std::ostream& operator<<(std::ostream& out, const ElementDisplay& disp) {
    out << disp.color << disp.ch << Color::RESET;
    return out;
}