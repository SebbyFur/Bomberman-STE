#include "element/Element.hpp"
#include "logic/Tile.hpp"

Element::Element(Tile* tile) : tile(tile) {
    //
}

Element::~Element() {
    //
}

Tile* Element::getTile() {
    return tile;
}

void Element::setTile(Tile* tile) {
    this->tile = tile;
}

Position Element::getPos() const {
    return this->tile->getPos();
}

std::ostream& operator<<(std::ostream& out, const Element& element) {
    out << element.getDisplay();
    return out;
}