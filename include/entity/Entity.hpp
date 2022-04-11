#ifndef _ENTITY_HPP_
#define _ENTITY_HPP_

#include <iostream>
#include "element/Element.hpp"
#include "util/Direction.hpp"
#include <vector>

class Belonging;

/**
* @file Entity.hpp
* @brief Fichier de classe Entity
*
* Fichier de classe Entity
*/

/**
* @class Entity
* @brief Classe Entity
*
* Cette classe hérite d'Element. Elle sert de base à tout ce qui est "mobile" sur la Map.
*/
class Entity : public Element {
    public:
        Entity(Tile* tile);
        virtual ~Entity();

        /**
        * @brief Méthode tour suivant
        * @return un booléen
        *
        * Méthode virtuelle pure tour suivant pour Entity
        */
        virtual bool nextTurn() = 0;
};

#endif