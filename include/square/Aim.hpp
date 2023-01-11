#ifndef _AIM_HPP_
#define _AIM_HPP_

#include "Square.hpp"
#include "element/ElementsConfig.hpp"

/**
* @file Aim.hpp
* @brief Fichier de classe Aim
*
* Fichier de classe Aim
*/

/**
* @class Aim
* @brief Classe Aim
*
* Cette classe hérite de Aim.
*/
class Aim : public Square {
    public:
        Aim(Tile* tile);
        ~Aim() override;

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