#include "belonging/BelongingMap.hpp"

std::map<const char, std::function<Belonging*(Tile* tile, Entity* owner)>> belongings = {
    {'O', [](Tile* tile, Entity* owner) -> Belonging* { return new Bomb(tile, owner); }},
    {'@', [](Tile* tile, Entity* owner) -> Belonging* { return new Explosion(tile, owner); }}
};

Belonging* make_belonging(char ch, Tile* tile, Entity* owner) {
    try {
        return belongings[ch](tile, owner);
    } catch (std::bad_function_call& e) {
        return NULL;
    }
}