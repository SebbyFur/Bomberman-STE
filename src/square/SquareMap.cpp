#include "square/SquareMap.hpp"

std::map<const char, std::function<Square*(TilesConfig& tiles)>> squares = {
    {'X', [](TilesConfig& tiles) -> Square* { return new Aim(tiles); }},
    {'_', [](TilesConfig& tiles) -> Square* { return new Air(tiles); }},
    {'W', [](TilesConfig& tiles) -> Square* { return new Wall(tiles); }},
    {'w', [](TilesConfig& tiles) -> Square* { return new BrokenWall(tiles); }},
    {'I', [](TilesConfig& tiles) -> Square* { return new UnbreakableWall(tiles); }}
};

Square* make_square(char ch, TilesConfig& tiles) {
    try {
        return squares[ch](tiles);
    } catch (std::bad_function_call& e) {
        return NULL;
    }
}