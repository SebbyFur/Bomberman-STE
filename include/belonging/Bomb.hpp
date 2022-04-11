#ifndef _BOMB_HPP_
#define _BOMB_HPP_

#include "belonging/Belonging.hpp"
#include "entity/Entity.hpp"

/**
* @file Bomb.hpp
* @brief Fichier de classe Bomb
*
* Fichier de classe Bomb
*/

/**
* @class Bomb
* @brief Classe Bomb
*
* Cette classe hérite de Belonging
*/
class Bomb : public Belonging {
    private:
        std::vector<Belonging*> belongings;
        int countdown;
    public:
        Bomb(Tile* tile, Entity* owner);
        ~Bomb() override;

        /**
        * @brief Méthode d'explosion
        *
        * Fais exploser la bombe
        */
        void explode();

        /**
        * @brief Setter de countdown
        * @param countdown un entier
        *
        * Setter de countdown
        */
        void setCountDown(int countdown);

        /**
        * @brief Getter de countdown
        * @return un entier
        *
        * Getter de countdown
        */
        int getCountDown() const;

        /**
        * @brief Méthode tour suivant
        * @return un booléen
        *
        * Méthode tour suivant pour Bomb
        */
        bool nextTurn() override;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Renvoie l'affichage de la Bomb
        */
        const ElementDisplay& getDisplay() const override;
};

#endif