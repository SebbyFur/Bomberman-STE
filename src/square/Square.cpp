#include "square/Square.hpp"

Square::Square(TileConfigValue& display) : display(display) {
    //
}

Square::~Square() {
    //
}

std::ostream& operator<<(std::ostream& out, Square& square) {
    out << square.display;
    return out;
}