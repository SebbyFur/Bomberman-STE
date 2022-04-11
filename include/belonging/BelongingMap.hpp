#ifndef _BELONGING_MAP_HPP_
#define _BELONGING_MAP_HPP_

#include <map>
#include <functional>
#include "entity/Entity.hpp"
#include "belonging/Bomb.hpp"
#include "belonging/Explosion.hpp"

/**
* @file BelongingMap.hpp
* @brief Fichier de Map Belonging
*
* Ce fichier est purement fonctionnel. Il renvoie le Belonging correspondant au caractère passé en paramètre
*/

extern std::map<const char, std::function<Belonging*(Tile* tile, Entity* owner)>> belongings;

Belonging* make_belonging(char ch, Tile* tile, Entity* owner);

#endif