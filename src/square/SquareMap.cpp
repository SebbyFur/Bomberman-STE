#include "square/SquareMap.hpp"
#include "logic/Tile.hpp"

std::map<const char, std::function<Square*(Tile* tile)>> squares = {
    {'X', [](Tile* tile) -> Square* { return new Aim(tile); }},
    {'_', [](Tile* tile) -> Square* { return new Air(tile); }},
    {'W', [](Tile* tile) -> Square* { return new Wall(tile); }},
    {'w', [](Tile* tile) -> Square* { return new BrokenWall(tile); }},
    {'I', [](Tile* tile) -> Square* { return new UnbreakableWall(tile); }}
};

Square* make_square(char ch, Tile* tile) {
    try {
        return squares.at(ch)(tile);
    } catch (std::out_of_range& e) {
        return NULL;
    }
}