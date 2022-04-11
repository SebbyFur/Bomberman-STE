#ifndef _ELEMENT_HPP_
#define _ELEMENT_HPP_

#include <iostream>
#include "element/ElementDisplay.hpp"
#include "util/Position.hpp"

class Tile;

/**
* @file Element.hpp
* @brief Fichier de classe Element
*
* Fichier de classe Element
*/

/**
* @class Element
* @brief Classe Element
*
* Cette classe abstraite sert de base à beaucoup d'autres classes dans le code 
*/
class Element {
    protected:
        Tile* tile;
    public:
        Element(Tile* tile);
        virtual ~Element();

        /**
        * @brief Getter de Tile*
        * @return un Tile*
        *
        * Renvoie le Tile* auquel appartient l'Element
        */
        Tile* getTile();

        
        /**
        * @brief Setter de Tile*
        * @param tile un Tile*
        *
        * Setter de Tile*
        */
        void setTile(Tile* tile);

        /**
        * @brief Getter de Position
        * @return une Position
        *
        * Renvoie la Position du Tile
        */
        Position getPos() const;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Cette méthode virtuelle pure renvoie un ElementDisplay
        */
        virtual const ElementDisplay& getDisplay() const = 0;

        /**
        * @brief Surcharge de l'opérateur de flux sortant
        * @return un std::ostream&
        * @param out le flux
        * @param element l'Element à afficher
        * Renvoie un std::ostream&
        */
        friend std::ostream& operator<<(std::ostream& out, const Element& element);
};

#endif