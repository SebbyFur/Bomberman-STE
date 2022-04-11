#ifndef _BROKEN_WALL_HPP_
#define _BROKEN_WALL_HPP_

#include "Square.hpp"
#include "element/ElementsConfig.hpp"

/**
* @file BrokenWall.hpp
* @brief Fichier de classe BrokenWall
*
* Fichier de classe BrokenWall
*/

/**
* @class BrokenWall
* @brief Classe BrokenWall
*
* Cette classe hérite de BrokenWall.
*/
class BrokenWall : public Square {
    public:
        BrokenWall(Tile* tile);
        ~BrokenWall() override;

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