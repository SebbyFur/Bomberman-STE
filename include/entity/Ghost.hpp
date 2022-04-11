#ifndef _GHOST_HPP_
#define _GHOST_HPP_

#include "entity/Enemy.hpp"

/**
* @file Ghost.hpp
* @brief Fichier de classe Ghost
*
* Fichier de classe Ghost
*/

/**
* @class Ghost
* @brief Classe Ghost
*
* Cette classe hérite d'Enemy. C'est un type d'Enemy.
*/
class Ghost : public Enemy {
    public:
        Ghost(Tile* tile);
        ~Ghost() override;

        /**
        * @brief Getter de l'attribut de bypass des murs
        * @return un booléen
        *
        * Cette méthode renvoie vrai si le Mob peut passer à travers les murs, sinon faux
        */
        bool canMoveThrough() const override;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Cette méthode renvoie un ElementDisplay
        */
        const ElementDisplay& getDisplay() const override;
};

#endif