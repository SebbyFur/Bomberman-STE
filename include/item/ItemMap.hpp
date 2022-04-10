#ifndef _ITEM_MAP_HPP_
#define _ITEM_MAP_HPP_

#include <map>
#include <functional>
#include "item/Item.hpp"
#include "logic/Tile.hpp"

extern std::map<const char, std::function<Item*(Tile* tile)>> items;

Item* make_item(char ch, Tile* tile);
Item* rand_item(Tile* tile);

#endif