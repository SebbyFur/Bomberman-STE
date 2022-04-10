#ifndef _SYSTEM_HPP_
#define _SYSTEM_HPP_

#include "logic/Game.hpp"

class System {
    private:
        Game game;
    public:
        System();
        void start();
        void menu();
        int setGame();
};

#endif