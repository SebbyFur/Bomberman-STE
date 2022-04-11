#ifndef _POSITION_HPP_
#define _POSITION_HPP_

#include <ostream>
#include "Direction.hpp"

/**
* @file Position.hpp
* @brief Fichier de classe Position
*
* Fichier de classe Position
*/

/**
* @class Position
* @brief Classe Position
*
* Cette classe gère les Positions.
*/
class Position {
    private:
        int x;
        int y;
    public:
        Position(int x = 0, int y = 0);

        /**
        * @brief Getter pour X
        * @return un entier
        *
        * Renvoie l'attribut X
        */
        int getX() const;

        /**
        * @brief Getter pour Y
        * @return un entier
        *
        * Renvoie l'attribut Y
        */
        int getY() const;

        /**
        * @brief Méthode statique pour obtenir la distance entre deux points
        * @return un double
        * @param pos première position
        * @param pos2 deuxième position
        * Renvoie la distance entre ces deux points
        */
        static double distance(const Position& pos, const Position& pos2);

        /**
        * @brief Méthode statique pour obtenir l'angle entre deux points
        * @return un double
        * @param pos première position
        * @param pos2 deuxième position
        * Renvoie l'angle entre ces deux points
        */
        static double angle(const Position& pos, const Position& pos2);

        /**
        * @brief Surcharge de l'opérateur +
        * @return une Position
        * @param dir une Direction
        * Renvoie la somme de la Position et de la Direction
        */
        Position operator+(const Direction& dir);

        /**
        * @brief Surcharge de l'opérateur +=
        * @param dir une Direction
        * Ajoute à l'objet courant la Direction
        */
        void operator+=(const Direction& dir);

        /**
        * @brief Méthode pour obtenir la Position sous forme de std::string
        * @return un std::string
        * Renvoie la Position sous forme de std::string
        */
        std::string to_str() const;

        /**
        * @brief Surcharge de l'opérateur de flux sortant
        * @return un std::ostream&
        * @param out le flux
        * @param pos la Position à afficher
        * Renvoie un std::ostream&
        */
        friend std::ostream& operator<<(std::ostream& out, const Position& pos);
};

#endif