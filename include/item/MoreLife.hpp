#ifndef _MORE_LIFE_HPP_
#define _MORE_LIFE_HPP_

#include "item/Item.hpp"

/**
* @file MoreLife.hpp
* @brief Fichier de classe MoreLife
*
* Fichier de classe MoreLife
*/

/**
* @class MoreLife
* @brief Classe MoreLife
*
* Cette classe hérite d'Item. Cet item permet de rendre de la vie au Mob
*/
class MoreLife : public Item {
    public:
        MoreLife(Tile* tile);
        ~MoreLife() override;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Renvoie l'affichage de l'Item
        */
        const ElementDisplay& getDisplay() const override;
};

#endif