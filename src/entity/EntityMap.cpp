#include "entity/EntityMap.hpp"

std::map<const char, std::function<Entity*(const ElementsConfig& elements)>> entities = {
    {'P', [](const ElementsConfig& elements) -> Entity* { return new Player(elements); }},
    {'O', [](const ElementsConfig& elements) -> Entity* { return new Bomb(elements); }},
    {'@', [](const ElementsConfig& elements) -> Entity* { return new Explosion(elements); }},
    {'M', [](const ElementsConfig& elements) -> Entity* { return new Monster(elements); }},
    {'G', [](const ElementsConfig& elements) -> Entity* { return new Ghost(elements); }},
    {'B', [](const ElementsConfig& elements) -> Entity* { return new Bowman(elements); }}
};

Entity* make_entity(char ch, const ElementsConfig& elements) {
    try {
        return entities[ch](elements);
    } catch (std::bad_function_call& e) {
        return NULL;
    }
}