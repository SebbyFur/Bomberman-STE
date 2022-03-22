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

extern std::map<const char, std::function<Square*(const ElementsConfig& elements)>> squares;

Square* make_square(char ch, const ElementsConfig& elements);

#endif