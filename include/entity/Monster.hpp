#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#include "entity/Enemy.hpp"

/**
* @file Monster.hpp
* @brief Fichier de classe Monster
*
* Fichier de classe Monster
*/

/**
* @class Monster
* @brief Classe Monster
*
* Cette classe hérite d'Enemy. C'est un type d'Enemy.
*/

class Monster : public Enemy {
    public:
        Monster(Tile* tile);
        ~Monster() override;

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