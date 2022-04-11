#ifndef _GAME_HPP_
#define _GAME_HPP_

#include "logic/Map.hpp"
#include "element/ElementsConfig.hpp"
#include <string>
#include <memory>

/**
* @file Game.hpp
* @brief Fichier de classe Game
*
* Fichier de classe Game
*/

/**
* @class Game
* @brief Classe Game
*
* Cette classe permet de charger une Map et un fichier de Config pour démarrer une partie.
*/
class Game {
    private:
        std::unique_ptr<Map> map;
        std::unique_ptr<ElementsConfig> display_config;
    public:
        Game(std::string map_path, std::string config_path);
        Game();

        /**
        * @brief Méthode de démarrage
        *
        * Permet de démarrer une partie
        */
        void startGame();
};

#endif