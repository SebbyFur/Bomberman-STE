#ifndef _POWER_UP_HPP_
#define _POWER_UP_HPP_

#include "item/Item.hpp"

/**
* @file PowerUp.hpp
* @brief Fichier de classe PowerUp
*
* Fichier de classe PowerUp
*/

/**
* @class PowerUp
* @brief Classe PowerUp
*
* Cette classe hérite d'Item. Cet item permet de donner de la puissance au Mob.
*/
class PowerUp : public Item {
    public:
        PowerUp(Tile* tile);
        ~PowerUp() override;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Renvoie l'affichage de l'Item
        */
        const ElementDisplay& getDisplay() const override;
};

#endif