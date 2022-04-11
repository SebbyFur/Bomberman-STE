#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include "entity/Bomber.hpp"

/**
* @file Player.hpp
* @brief Fichier de classe Player
*
* Fichier de classe Player
*/

/**
* @class Player
* @brief Classe Player
*
* Cette classe hérite de Bomber. C'est l'Entity que l'utilisateur va contrôler.
*/
class Player : public Bomber {
    public:
        Player(Tile* tile);
        ~Player() override;

        /**
        * @brief Méthode tour suivant
        * @return un booléen
        *
        * Méthode tour suivant pour le Player
        */
        bool nextTurn() override;

        /**
        * @brief Méthode pour placer la bombe
        *
        * Place la bombe sur l'attribut Tile* lié au Mob
        */
        void placeBomb();

        /**
        * @brief Getter de l'attribut de bypass des murs
        * @return un booléen
        *
        * Cette méthode renvoie vrai si le Mob peut passer à travers les murs, sinon faux
        */
        bool canMoveThrough() const override;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Cette méthode renvoie un ElementDisplay
        */
        const ElementDisplay& getDisplay() const override;
};

#endif