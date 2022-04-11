#ifndef _ITEM_HPP_
#define _ITEM_HPP_

#include "element/Element.hpp"

/**
* @file Item.hpp
* @brief Fichier de classe Item
*
* Fichier de classe Item
*/

/**
* @class Item
* @brief Classe Item
*
* Cette classe sert de base à tous les Items.
*/
class Item : public Element {
    protected:
        const int health;
        const int speed;
        const int power;
        const int scale;
        const int bombs;
        const bool control_bombs;
        const bool move_through;
    public:
        Item(Tile* tile, int health, int speed, int power, int scale, int bombs, bool control_bombs, bool move_through);
        ~Item();

        /**
        * @brief Getter de la vie
        * @return un entier
        *
        * Renvoie la vie assignée à l'Item
        */
        int getHealth() const;

        /**
        * @brief Getter de la vitesse
        * @return un entier
        *
        * Renvoie la vitesse assignée à l'Item
        */
        int getSpeed() const;

        /**
        * @brief Getter de la puissance
        * @return un entier
        *
        * Renvoie la puissance assignée à l'Item
        */
        int getPower() const;

        /**
        * @brief Getter de l'étendu de l'explosion
        * @return un entier
        *
        * Renvoie l'étendu de l'explosion assignée à l'Item
        */
        int getScale() const;

        /**
        * @brief Getter des bombes
        * @return un entier
        *
        * Renvoie le nombre de bombes assigné à l'Item
        */
        int getBombs() const;

        /**
        * @brief Getter du contrôl des bombes
        * @return un booléen
        *
        * Renvoie vrai si l'Item permet le contrôle des bombes, faux sinon
        */
        bool getControlBombs() const;

        /**
        * @brief Getter de l'attribut move_through de l'Item
        * @return un booléen
        *
        * Renvoie vrai si l'Item permet à celui qui l'obtient de passer à travers les murs, faux sinon
        */
        bool getMoveThrough() const;
};

#endif