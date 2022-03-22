#include "element/Element.hpp"

Element::Element(const ElementDisplay& display) : display(display) {
    //
}

Element::~Element() {
    //
}

std::ostream& operator<<(std::ostream& out, const Element& element) {
    out << element.display;
    return out;
}