#ifndef _ENTITY_MAP_HPP_
#define _ENTITY_MAP_HPP_

#include <map>
#include <functional>
#include "config/TilesConfig.hpp"
#include "entity/Entity.hpp"
#include "entity/Bomb.hpp"
#include "entity/Bowman.hpp"
#include "entity/Explosion.hpp"
#include "entity/Ghost.hpp"
#include "entity/Monster.hpp"
#include "entity/Player.hpp"

extern std::map<const char, std::function<Entity*(TilesConfig& tiles)>> entities;

Entity* make_entity(char ch, TilesConfig& tiles);

#endif