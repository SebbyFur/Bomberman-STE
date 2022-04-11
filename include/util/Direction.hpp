#ifndef _DIRECTION_HPP_
#define _DIRECTION_HPP_

#include <string>
#include <map>

class Position;

/**
* @file Direction.hpp
* @brief Fichier de classe Direction
*
* Fichier de classe Direction
*/

/**
* @class Direction
* @brief Classe Direction
*
* Cette classe permet de lister et d'utiliser les quatres directions NORTH, EAST, SOUTH, WEST
*/
class Direction {
    private:
        Direction();
        Direction(const int x, const int y);
        const int x;
        const int y;
    public:
        static const Direction NORTH;
        static const Direction EAST;
        static const Direction SOUTH;
        static const Direction WEST;

        static const std::map<const std::string, const Direction&> directions;
        static const std::map<const char, const Direction&> char_dir;
    
        /**
        * @brief Méthode statique pour obtenir les Directions depuis un std::string
        * @return un Direction&
        *
        * Renvoie un Direction& en fonction du std::string passé en paramètre
        */
        static const Direction& getDirection(const std::string dir);

        /**
        * @brief Méthode statique pour obtenir les Directions depuis un char
        * @return un Direction&
        *
        * Renvoie un Direction& en fonction du char passé en paramètre
        */
        static const Direction& getDirection(char dir);

        /**
        * @brief Méthode statique pour obtenir la Direction de déplacement depuis deux objets Position
        * @return un Direction&
        *
        * Renvoie un Direction& en fonction des Positions passés en paramètres
        */
        static const Direction& getDirection(const Position& pos, const Position& pos2);

        /**
        * @brief Getter pour X
        * @return un entier
        *
        * Renvoie l'attribut X
        */
        const int& getX() const;

        /**
        * @brief Getter pour Y
        * @return un entier
        *
        * Renvoie l'attribut Y
        */
        const int& getY() const;

        /**
        * @brief Surcharge de l'opérateur *
        * @param dir la Direction
        * @param mul le multiplicateur
        * @return une Direction
        *
        * Renvoie une Direction
        */
        friend Direction operator*(const Direction& dir, int mul);
};

#endif