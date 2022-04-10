#include <iterator>
#include <ctime>
#include "item/ItemMap.hpp"
#include "item/ScaleUp.hpp"
#include "item/SpeedUp.hpp"
#include "item/PowerUp.hpp"
#include "item/MoreLife.hpp"
#include "item/MoreBomb.hpp"
#include "item/ControlBombs.hpp"
#include "item/MoveThrough.hpp"
#include "util/Random.hpp"

std::map<const char, std::function<Item*(Tile* tile)>> items = {
    {'R', [](Tile* tile) -> Item* { return new ScaleUp(tile); }},
    {'S', [](Tile* tile) -> Item* { return new SpeedUp(tile); }},
    {'E', [](Tile* tile) -> Item* { return new MoreBomb(tile); }},
    {'L', [](Tile* tile) -> Item* { return new MoreLife(tile); }},
    {'U', [](Tile* tile) -> Item* { return new PowerUp(tile); }},
    {'Y', [](Tile* tile) -> Item* { return new ControlBombs(tile); }},
    {'#', [](Tile* tile) -> Item* { return new MoveThrough(tile); }}
};

Item* make_item(char ch, Tile* tile) {
    try {
        return items.at(ch)(tile);
    } catch (std::out_of_range& e) {
        return NULL;
    }
}

Item* rand_item(Tile* tile) {
    Item* ret;
    if (Random::randRange(0, 100) < 95) {
        int range = Random::randRange(0, 100);
        if (range <= 100 && range > 70) {
            ret = items.at('L')(tile);  
        } else if (range <= 70 && range > 50) {
            ret = items.at('U')(tile);
        } else if (range <= 50 && range > 40) {
            ret = items.at('R')(tile);
        } else if (range <= 40 && range > 30) {
            ret = items.at('S')(tile);
        } else if (range <= 30 && range >= 0) {
            ret = items.at('E')(tile);
        }
    } else {
        if (Random::randRange(0, 1) == 0) {
            ret = items.at('Y')(tile);
        } else {
            ret = items.at('#')(tile);
        }
    }

    return ret;
}