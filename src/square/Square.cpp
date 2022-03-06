#include "square/Square.hpp"

Square::Square(TileConfigValue& display) : display(display) {
    //
}

std::ostream& operator<<(std::ostream& out, Square& square) {
    out << square.display;
    return out;
}