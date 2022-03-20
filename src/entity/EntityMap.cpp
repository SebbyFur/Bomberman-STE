#include "entity/EntityMap.hpp"

std::map<const char, std::function<Entity*(TilesConfig& tiles)>> entities = {
    {'P', [](TilesConfig& tiles) -> Entity* { return new Player(tiles); }},
    {'O', [](TilesConfig& tiles) -> Entity* { return new Bomb(tiles); }},
    {'@', [](TilesConfig& tiles) -> Entity* { return new Explosion(tiles); }},
    {'M', [](TilesConfig& tiles) -> Entity* { return new Monster(tiles); }},
    {'G', [](TilesConfig& tiles) -> Entity* { return new Ghost(tiles); }},
    {'B', [](TilesConfig& tiles) -> Entity* { return new Bowman(tiles); }}
};

Entity* make_entity(char ch, TilesConfig& tiles) {
    try {
        return entities[ch](tiles);
    } catch (std::bad_function_call& e) {
        return NULL;
    }
}