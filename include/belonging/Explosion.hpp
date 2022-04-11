#ifndef _EXPLOSION_HPP_
#define _EXPLOSION_HPP_

#include "belonging/Belonging.hpp"
#include "entity/Entity.hpp"

/**
* @file Explosion.hpp
* @brief Fichier de classe Explosion
*
* Fichier de classe Explosion
*/

/**
* @class Explosion
* @brief Classe Explosion
*
* Cette classe hérite de Belonging
*/
class Explosion : public Belonging {
    public:
        Explosion(Tile* tile, Entity* owner);
        ~Explosion() override;

        /**
        * @brief Méthode tour suivant
        * @return un booléen
        *
        * Méthode tour suivant pour Explosion
        */
        bool nextTurn() override;

        /**
        * @brief Getter de l'affichage
        * @return un ElementDisplay&
        *
        * Renvoie l'affichage de l'Explosion
        */
        const ElementDisplay& getDisplay() const override;
};

#endif