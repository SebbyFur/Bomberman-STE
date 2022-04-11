#ifndef _BELONGING_HPP_
#define _BELONGING_HPP_

#include "entity/Entity.hpp"

/**
* @file Belonging.hpp
* @brief Fichier de classe Belonging
*
* Fichier de classe Belonging
*/

/**
* @class Belonging
* @brief Classe Belonging
*
* Cette classe hérite d'Entity
*/
class Belonging : public Entity {
    protected:
        Entity* owner;
    public:
        Belonging(Tile* tile, Entity* owner);
        ~Belonging();
        /**
        * @brief Getter de l'owner
        * @return Le pointeur d'owner
        *
        * Getter de l'owner
        */
        Entity* getOwner() const;
};

#endif