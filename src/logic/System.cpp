#include "logic/System.hpp"
#include "util/Util.hpp"

System::System() {
    //
}

void System::menu() {
    while (true) {
        char choice;

        std::cout << Color::BOLDRED << "######   ######  ###    ### ######  ####### ######  ###    ###  #####  ###    ##" << std::endl;
        sleep_for(100);
        std::cout << Color::YELLOW << "##   ## ##    ## ####  #### ##   ## ##      ##   ## ####  #### ##   ## ####   ##" << std::endl;
        sleep_for(100);
        std::cout << Color::GREEN << "######  ##    ## ## #### ## ######  #####   ######  ## #### ## ####### ## ##  ##" << std::endl;
        sleep_for(100);
        std::cout << Color::BLUE << "##   ## ##    ## ##  ##  ## ##   ## ##      ##   ## ##  ##  ## ##   ## ##  ## ## " << std::endl;
        sleep_for(100);
        std::cout << Color::MAGENTA << "######   ######  ##      ## ######  ####### ##   ## ##      ## ##   ## ##   ####" << Color::RESET << std::endl;
    

        sleep_for(300);
        std::cout << "1) Jouer" << std::endl;

        sleep_for(300);
        std::cout << "2) Quitter" << std::endl;

        std::cin >> choice;
        while (std::cin.get() != '\n');

        switch (choice) {
            case '1':
                if (setGame()) game.startGame();
                break;
            case '2':
                return;
        }
    }
}

bool System::setGame() {
    std::string map;

    std::cout << "Saisissez le chemin relatif vers le fichier de map : ";
    std::cin >> map;

    try {
        game = Game(map, "config.txt");
    } catch (std::invalid_argument& err) {
        std::cout << "\nL'un des deux fichiers est inexistant ou invalide !\n" << std::endl;
        sleep_for(2000);
        return false;
    }

    return true;
}

void System::start() {
    game.startGame();
}