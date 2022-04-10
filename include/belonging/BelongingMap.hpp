#ifndef _BELONGING_MAP_HPP_
#define _BELONGING_MAP_HPP_

#include <map>
#include <functional>
#include "entity/Entity.hpp"
#include "belonging/Bomb.hpp"
#include "belonging/Explosion.hpp"

extern std::map<const char, std::function<Belonging*(Tile* tile, Entity* owner)>> belongings;

Belonging* make_belonging(char ch, Tile* tile, Entity* owner);

#endif