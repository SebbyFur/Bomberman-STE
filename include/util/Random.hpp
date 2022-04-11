#ifndef _RANDOM_HPP_
#define _RANDOM_HPP_

#include <random>

/**
* @file Random.hpp
* @brief Fichier de classe Random
*
* Fichier de classe Random
*/

/**
* @class Random
* @brief Classe Random
*
* Cette classe abstraite permet de générer des nombres aléatoires
*/
class Random {
    private:
        static std::mt19937 generator;
        static std::uniform_int_distribution<int> distribution;

        /**
        * @brief Méthode statique pour changer la distribution
        * @param a un entier
        * @param b un entier
        *
        * Change la distribution entre l'intervalle [a, b]
        */
        static void changeDist(int a, int b);
    public:
        /**
        * @brief Méthode pour obtenir un entier entre [a, b]
        * @param a un entier
        * @param b un entier
        * @return un entier
        *
        * Retourne un entier entre [a, b]
        */
        static int randRange(int a, int b);
        virtual ~Random() = 0;
};

#endif