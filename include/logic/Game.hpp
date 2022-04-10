#ifndef _GAME_HPP_
#define _GAME_HPP_

#include "logic/Map.hpp"
#include "element/ElementsConfig.hpp"
#include <string>
#include <memory>

class Game {
    private:
        std::unique_ptr<Map> map;
        std::unique_ptr<ElementsConfig> display_config;
    public:
        Game(std::string map_path, std::string config_path);
        Game();
        void startGame();
};

#endif