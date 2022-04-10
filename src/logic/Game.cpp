#include "logic/Game.hpp"

Game::Game(std::string map_path, std::string config_path) {
    display_config = std::unique_ptr<ElementsConfig>(new ElementsConfig(config_path));
    map = std::unique_ptr<Map>(new Map(map_path, *display_config));
}

Game::Game() {
    //
}

void Game::startGame() {
    std::cout << *map << std::endl;
    int status;
    while ((status = map->tick()) == -1);
    
    if (!status) {
        std::cout << Color::GREEN;
        std::cout << "██████  ██████   █████  ██    ██  ██████  ██" << std::endl;
        std::cout << "██   ██ ██   ██ ██   ██ ██    ██ ██    ██ ██" << std::endl;
        std::cout << "██████  ██████  ███████ ██    ██ ██    ██ ██" << std::endl;
        std::cout << "██   ██ ██   ██ ██   ██  ██  ██  ██    ██   " << std::endl;
        std::cout << "██████  ██   ██ ██   ██   ████    ██████  ██\n" << Color::RESET << std::endl;
    } else {
        std::cout << Color::RED;
        std::cout << "██       ██████  ███████ ███████ ██████  ██" << std::endl;
        std::cout << "██      ██    ██ ██      ██      ██   ██ ██" << std::endl;
        std::cout << "██      ██    ██ ███████ █████   ██████  ██" << std::endl;
        std::cout << "██      ██    ██      ██ ██      ██   ██   " << std::endl;
        std::cout << "███████  ██████  ███████ ███████ ██   ██ ██\n" << Color::RESET << std::endl;
    }

    sleep_for(2000);
}