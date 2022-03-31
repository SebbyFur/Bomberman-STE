#include "logic/System.hpp"

System::System(std::string map_path, std::string config_path) {
    display_config = std::unique_ptr<ElementsConfig>(new ElementsConfig(config_path));
    map = std::unique_ptr<Map>(new Map(map_path, *display_config));
}

void System::startSystem() {
    char c;
    Entity* player = map->getTileAtPos(0, 0)->getEntity();
    while (true) {
        //std::system("clear");
        std::cout << *map << std::endl;

        c = std::getchar();
        switch (c) {
            case '8':
                player->move(Direction::NORTH);
                break;
            case '4':
                player->move(Direction::WEST);
                break;
            case '6':
                player->move(Direction::EAST);
                break;
            case '2':
                player->move(Direction::SOUTH);
                break;
            case '5':
                player->nextTurn();
                break;
        }

        std::getchar();
    }
}