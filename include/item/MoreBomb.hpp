#ifndef _MORE_BOMB_HPP_
#define _MORE_BOMB_HPP_

#include "item/Item.hpp"

/**
* @file MoreBomb.hpp
* @brief Fichier de classe MoreBomb
*
* Fichier de classe MoreBomb
*/

/**
* @class MoreBomb
* @brief Classe MoreBomb
*
* Cette classe hérite d'Item. Cet item permet d'augmenter le nombre de Bombes maximum
*/
class MoreBomb : public Item {
    public:
        MoreBomb(Tile* tile);
        ~MoreBomb() override;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Renvoie l'affichage de l'Item
        */
        const ElementDisplay& getDisplay() const override;
};

#endif