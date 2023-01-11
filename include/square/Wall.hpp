#ifndef _WALL_HPP_
#define _WALL_HPP_

#include "Square.hpp"
#include "element/ElementsConfig.hpp"

/**
* @file Wall.hpp
* @brief Fichier de classe Wall
*
* Fichier de classe Wall
*/

/**
* @class Wall
* @brief Classe Wall
*
* Cette classe hérite de Square.
*/
class Wall : public Square {
    public:
        Wall(Tile* tile);
        ~Wall() override;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Renvoie l'affichage du Square
        */
        const ElementDisplay& getDisplay() const override;

        /**
        * @brief Méthode pour savoir si le Square est cassable
        * @return un booléen
        *
        * Renvoie true si le Square est cassable, false autrement
        */
        bool isDestroyable() const override;

        /**
        * @brief Méthode de destruction du Square
        *
        * Détruit le Square
        */
        void destroy() override;

        /**
        * @brief Méthode pour savoir si le Square est opaque
        * @return un booléen
        *
        * Renvoie true si le Square est opaque, false autrement
        */
        bool isOpac() const override;
};

#endif