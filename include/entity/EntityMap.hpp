#ifndef _ENTITY_MAP_HPP_
#define _ENTITY_MAP_HPP_

#include <map>
#include <functional>
#include "element/ElementsConfig.hpp"
#include "entity/Entity.hpp"
#include "entity/Bowman.hpp"
#include "entity/Ghost.hpp"
#include "entity/Monster.hpp"
#include "entity/Player.hpp"
#include "item/ScaleUp.hpp"

/**
* @file EntityMap.hpp
* @brief Fichier de Map Entity
*
* Ce fichier est purement fonctionnel. Il renvoie l'Entity correspondant au caractère passé en paramètre
*/

extern std::map<const char, std::function<Entity*(Tile* tile)>> entities;

Entity* make_entity(char ch, Tile* tile);

#endif