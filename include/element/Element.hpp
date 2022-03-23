#ifndef _ELEMENT_HPP_
#define _ELEMENT_HPP_

#include <iostream>
#include "element/ElementDisplay.hpp"

class Map;

class Element {
    protected:
        const ElementDisplay& display;
    public:
        Element(const ElementDisplay& display);
        virtual ~Element();
        friend std::ostream& operator<<(std::ostream& out, const Element& element);
};

#endif