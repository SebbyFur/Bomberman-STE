#ifndef _CONTROL_BOMBS_HPP_
#define _CONTROL_BOMBS_HPP_

#include "item/Item.hpp"

/**
* @file ControlBombs.hpp
* @brief Fichier de classe ControlBombs
*
* Fichier de classe ControlBombs
*/

/**
* @class ControlBombs
* @brief Classe ControlBombs
*
* Cette classe hérite d'Item. Cet item permet de contrôler l'instant auquel les Bombes en lien avec le Bomber vont exploser
*/
class ControlBombs : public Item {
    public:
        ControlBombs(Tile* tile);
        ~ControlBombs() override;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Renvoie l'affichage de l'Item
        */
        const ElementDisplay& getDisplay() const override;
};

#endif