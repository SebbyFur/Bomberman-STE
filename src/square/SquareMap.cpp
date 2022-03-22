#include "square/SquareMap.hpp"

std::map<const char, std::function<Square*(const ElementsConfig& elements)>> squares = {
    {'X', [](const ElementsConfig& elements) -> Square* { return new Aim(elements); }},
    {'_', [](const ElementsConfig& elements) -> Square* { return new Air(elements); }},
    {'W', [](const ElementsConfig& elements) -> Square* { return new Wall(elements); }},
    {'w', [](const ElementsConfig& elements) -> Square* { return new BrokenWall(elements); }},
    {'I', [](const ElementsConfig& elements) -> Square* { return new UnbreakableWall(elements); }}
};

Square* make_square(char ch, const ElementsConfig& elements) {
    try {
        return squares[ch](elements);
    } catch (std::bad_function_call& e) {
        return NULL;
    }
}