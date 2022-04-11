#ifndef _UNBREAKABLE_WALL_HPP_
#define _UNBREAKABLE_WALL_HPP_

#include "Square.hpp"
#include "element/ElementsConfig.hpp"

/**
* @file UnbreakableWall.hpp
* @brief Fichier de classe UnbreakableWall
*
* Fichier de classe UnbreakableWall
*/

/**
* @class UnbreakableWall
* @brief Classe UnbreakableWall
*
* Cette classe hérite de Square.
*/
class UnbreakableWall : public Square {
    public:
        UnbreakableWall(Tile* tile);
        ~UnbreakableWall() override;

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