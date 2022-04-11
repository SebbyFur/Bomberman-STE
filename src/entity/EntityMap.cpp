#include "entity/EntityMap.hpp"

std::map<const char, std::function<Entity*(Tile* tile)>> entities = {
    {'P', [](Tile* tile) -> Entity* { return new Player(tile); }},
    {'M', [](Tile* tile) -> Entity* { return new Monster(tile); }},
    {'G', [](Tile* tile) -> Entity* { return new Ghost(tile); }},
    {'B', [](Tile* tile) -> Entity* { return new Bowman(tile); }}
};

Entity* make_entity(char ch, Tile* tile) {
    try {
        return entities.at(ch)(tile);
    } catch (std::out_of_range& e) {
        return nullptr;
    }
}