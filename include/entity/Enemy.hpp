#ifndef _ENEMY_HPP_
#define _ENEMY_HPP_

#include "entity/Mob.hpp"

/**
* @file Enemy.hpp
* @brief Fichier de classe Enemy
*
* Fichier de classe Enemy
*/

/**
* @class Enemy
* @brief Classe Enemy
*
* Cette classe hérite de Mob. C'est un type de Mob.
*/
class Enemy : public Mob {
    protected:
        int cooldown;
    public:
        Enemy(Tile* tile);
        Enemy(Tile* tile, int health, int power, int speed);
        ~Enemy();

        /**
        * @brief Méthode tour suivant
        * @return un booléen
        *
        * Méthode tour suivant pour Enemy
        */
        bool nextTurn() override;
};

#endif