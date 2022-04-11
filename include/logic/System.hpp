#ifndef _SYSTEM_HPP_
#define _SYSTEM_HPP_

#include "logic/Game.hpp"

/**
* @file System.hpp
* @brief Fichier de classe System
*
* Fichier de classe System
*/

/**
* @class System
* @brief Classe System
*
* Cette classe permet de charger une Map et un fichier de Config pour démarrer une partie.
*/
class System {
    private:
        Game game;
    public:
        System();

        /**
        * @brief Méthode de démarrage
        *
        * Permet de démarrer une partie
        */
        void start();

        /**
        * @brief Méthode d'affichage du menu
        *
        * Permet d'afficher le menu
        */
        void menu();

        /**
        * @brief Méthode de démarrage
        * @return un entier (oui si l'objet Game est valide, non sinon)
        *
        * Permet de démarrer une partie
        */
        bool setGame();
};

#endif