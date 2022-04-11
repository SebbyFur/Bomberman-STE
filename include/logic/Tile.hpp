#ifndef _TILE_HPP_
#define _TILE_HPP_

#include "entity/Entity.hpp"
#include "square/Square.hpp"
#include "item/Item.hpp"
#include "belonging/Explosion.hpp"
#include "belonging/Bomb.hpp"
#include "util/Position.hpp"

class Map;

/**
* @file Tile.hpp
* @brief Fichier de classe Tile
*
* Fichier de classe Tile
*/

/**
* @class Tile
* @brief Classe Tile
*
* Cette classe sert de base à la Map. La Map constitue un tableau de Tile*
*/
class Tile {
    private:
        Map* map;
        Explosion* explosion;
        Bomb* bomb;
        Entity* entity;
        Square* square;
        Item* item;
        const Position pos;
    public:
        Tile(Square* square, Entity* entity, Map* map, const Position pos);
        Tile(Map* map, const Position pos);
        ~Tile();

        /**
        * @brief Getter de la position
        * @return une Position
        *
        * Renvoie la position assignée à la Tile
        */
        Position getPos() const;

        /**
        * @brief Getter de la map
        * @return une Map*
        *
        * Renvoie la Map* assignée à la Tile
        */
        Map* getMap() const;

        /**
        * @brief Getter de l'Entity
        * @return un Entity*
        *
        * Renvoie l'Entity* assignée à la Tile
        */
        Entity* getEntity() const;

        /**
        * @brief Getter du Square
        * @return un Square*
        *
        * Renvoie le Square* assigné à la Tile
        */
        Square* getSquare() const;

        /**
        * @brief Getter de l'Item
        * @return un Item*
        *
        * Renvoie l'Item* assigné à la Tile
        */
        Item* getItem() const;
    
        /**
        * @brief Getter de l'Explosion
        * @return une Explosion*
        *
        * Renvoie l'Explosion* assignée à la Tile
        */
        Explosion* getExplosion() const;

        /**
        * @brief Getter de la Bomb
        * @return une Bomb*
        *
        * Renvoie la Bomb* assignée à la Tile
        */
        Bomb* getBomb() const;

        /**
        * @brief Setter de l'Entity*
        * @param entity une Entity*
        *
        * Setter de l'attribut Entity*
        */
        void setEntity(Entity* entity);

        /**
        * @brief Setter du Square*
        * @param square un Square*
        *
        * Setter de l'attribut Square*
        */
        void setSquare(Square* square);

        /**
        * @brief Setter de l'Item*
        * @param item un Item*
        *
        * Setter de l'attribut Item*
        */
        void setItem(Item* item);

        /**
        * @brief Setter de l'Explosion*
        * @param explosion une Explosion*
        *
        * Setter de l'attribut Explosion*
        */
        void setExplosion(Explosion* explosion);

        /**
        * @brief Setter de la Bomb*
        * @param bomb une Bomb*
        *
        * Setter de l'attribut Bomb*
        */
        void setBomb(Bomb* bomb);

        /**
        * @brief Surcharge de l'opérateur de flux sortant
        * @return un std::ostream&
        * @param out le flux
        * @param tile la Tile à afficher
        * Renvoie un std::ostream&
        */
        friend std::ostream& operator<<(std::ostream& out, const Tile& tile);
};

#endif