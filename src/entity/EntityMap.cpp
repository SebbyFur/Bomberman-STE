#include "entity/EntityMap.hpp"

std::map<const char, std::function<Entity*(Tile* tile)>> entities = {
    {'P', [](Tile* tile) -> Entity* { return new Player(tile); }},
    {'O', [](Tile* tile) -> Entity* { return new Bomb(tile); }},
    {'@', [](Tile* tile) -> Entity* { return new Explosion(tile); }},
    {'M', [](Tile* tile) -> Entity* { return new Monster(tile); }},
    {'G', [](Tile* tile) -> Entity* { return new Ghost(tile); }},
    {'B', [](Tile* tile) -> Entity* { return new Bowman(tile); }}
};

Entity* make_entity(char ch, Tile* tile) {
    try {
        return entities[ch](tile);
    } catch (std::bad_function_call& e) {
        return NULL;
    }
}