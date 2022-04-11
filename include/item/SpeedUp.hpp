#ifndef _SPEED_UP_HPP_
#define _SPEED_UP_HPP_

#include "item/Item.hpp"

/**
* @file SpeedUp.hpp
* @brief Fichier de classe SpeedUp
*
* Fichier de classe SpeedUp
*/

/**
* @class SpeedUp
* @brief Classe SpeedUp
*
* Cette classe hérite d'Item. Cet item permet d'augmenter la vitesse du Mob.
*/
class SpeedUp : public Item {
    public:
        SpeedUp(Tile* tile);
        ~SpeedUp() override;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Renvoie l'affichage de l'Item
        */
        const ElementDisplay& getDisplay() const override;
};

#endif