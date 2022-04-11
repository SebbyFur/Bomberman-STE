#ifndef _SQUARE_HPP_
#define _SQUARE_HPP_

#include <iostream>
#include "element/Element.hpp"
#include "element/ElementDisplay.hpp"

/**
* @file Square.hpp
* @brief Fichier de classe Square
*
* Fichier de classe Square
*/

/**
* @class Square
* @brief Classe Square
*
* Cette classe abstraite hérite d'Element. Elle sert de base à tous les autres Square.
*/
class Square : public Element {
    public:
        Square(Tile* tile);
        virtual ~Square();

        /**
        * @brief Méthode pour savoir si le Square est cassable
        * @return un booléen
        *
        * Renvoie true si le Square est cassable, false autrement
        */
        virtual bool isDestroyable() const = 0;

        /**
        * @brief Méthode de destruction du Square
        *
        * Détruit le Square
        */
        virtual void destroy() = 0;

        /**
        * @brief Méthode pour savoir si le Square est opaque
        * @return un booléen
        *
        * Renvoie true si le Square est opaque, false autrement
        */
        virtual bool isOpac() const = 0;
};

#endif