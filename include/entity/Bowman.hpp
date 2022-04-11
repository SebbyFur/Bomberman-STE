#ifndef _BOWMAN_HPP_
#define _BOWMAN_HPP_

#include "entity/Enemy.hpp"

/**
* @file Bowman.hpp
* @brief Fichier de classe Bowman
*
* Fichier de classe Bowman
*/

/**
* @class Bowman
* @brief Classe Bowman
*
* Cette classe hérite d'Enemy. C'est un type d'Enemy.
*/
class Bowman : public Enemy {
    public:
        Bowman(Tile* tile);
        ~Bowman() override;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Cette méthode renvoie un ElementDisplay
        */
        const ElementDisplay& getDisplay() const override;

        /**
        * @brief Getter de l'attribut de bypass des murs
        * @return un booléen
        *
        * Cette méthode renvoie vrai si le Mob peut passer à travers les murs, sinon faux
        */
        bool canMoveThrough() const override;
};

#endif