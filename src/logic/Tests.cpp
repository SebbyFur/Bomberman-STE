#include "logic/System.hpp"

int main(int argc, char** argv) {
    if (argc == 2 && argv[1] == std::string("--nocolor")) {
        Color::noColors();
    }

    System sys;
    sys.menu();

    return 0;
}