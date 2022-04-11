#ifndef _BOMBER_HPP_
#define _BOMBER_HPP_

#include "entity/Mob.hpp"

/**
* @file Bomber.hpp
* @brief Fichier de classe Bomber
*
* Fichier de classe Bomber
*/

/**
* @class Bomber
* @brief Classe Bomber
*
* Cette classe hérite de Mob. Elle permet de donner des attributs relatifs au placement de Bombs.
*/
class Bomber : public Mob {
    protected:
        int scale;
        int bombs;
        int bombs_left;
        bool control_bombs;
    public:
        Bomber(Tile* tile);
        ~Bomber();

        /**
        * @brief Getter du scale
        * @return un entier
        *
        * Renvoie l'étendue de l'explosion des bombes
        */
        int getScale() const;

        /**
        * @brief Getter des bombes
        * @return un entier
        *
        * Renvoie le nombre maximum de bombes
        */
        int getBombs() const;

        /**
        * @brief Getter des statistiques du Bomber
        * @return un entier
        *
        * Renvoie les statistiques du Bomber sous forme de std::string
        */
        std::string getStr() const override;

        /**
        * @brief Setter du scale
        * @param scale un entier
        *
        * Setter de l'étendue de l'explosion des bombes
        */
        void setScale(int scale);

        /**
        * @brief Setter des bombes
        * @param bombs un entier
        *
        * Setter du nombre maximum de bombes
        */
        void setBombs(int bombs);

        /**
        * @brief Incrémentation des bombes restantes
        * @param bombs un entier
        *
        * Ajoute à l'entier de bomb l'entier passé en paramètre
        */
        void addBombsLeft(int bombs);

        /**
        * @brief Surchage de l'opérateur +=
        * @param item un objet Item
        *
        * Permet d'ajouter les statistiques d'un Item au Bomber
        */
        void operator+=(const Item& item) override;
};

#endif