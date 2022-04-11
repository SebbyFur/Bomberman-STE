#ifndef _SCALE_UP_HPP_
#define _SCALE_UP_HPP_

#include "item/Item.hpp"

/**
* @file ScaleUp.hpp
* @brief Fichier de classe ScaleUp
*
* Fichier de classe ScaleUp
*/

/**
* @class ScaleUp
* @brief Classe ScaleUp
*
* Cette classe hérite d'Item. Cet item permet d'augmenter l'étendu de l'explosion des Bombes placés par le Bomber
*/
class ScaleUp : public Item {
    public:
        ScaleUp(Tile* tile);
        ~ScaleUp() override;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Renvoie l'affichage de l'Item
        */
        const ElementDisplay& getDisplay() const override;
};

#endif