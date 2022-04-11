#ifndef _SQUARE_MAP_HPP_
#define _SQUARE_MAP_HPP_

#include <map>
#include <functional>
#include "element/ElementsConfig.hpp"
#include "square/Square.hpp"
#include "square/Aim.hpp"
#include "square/Air.hpp"
#include "square/Wall.hpp"
#include "square/BrokenWall.hpp"
#include "square/UnbreakableWall.hpp"

/**
* @file SquareMap.hpp
* @brief Fichier de Map Square
*
* Ce fichier est purement fonctionnel. Il renvoie le Square correspondant au caractère passé en paramètre
*/

extern std::map<const char, std::function<Square*(Tile* tile)>> squares;

Square* make_square(char ch, Tile* tile);

#endif