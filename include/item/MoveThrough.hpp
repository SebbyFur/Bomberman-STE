#ifndef _MOVE_THROUGH_HPP_
#define _MOVE_THROUGH_HPP_

#include "item/Item.hpp"

/**
* @file MoveThrough.hpp
* @brief Fichier de classe MoveThrough
*
* Fichier de classe MoveThrough
*/

/**
* @class MoveThrough
* @brief Classe MoveThrough
*
* Cette classe hérite d'Item. Cet item permet de changer l'attribut move_through des Mobs pour qu'ils puissent passer à travers les murs
*/
class MoveThrough : public Item {
    public:
        MoveThrough(Tile* tile);
        ~MoveThrough() override;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Renvoie l'affichage de l'Item
        */
        const ElementDisplay& getDisplay() const override;
};

#endif