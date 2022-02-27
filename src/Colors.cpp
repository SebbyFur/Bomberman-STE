#include "Colors.hpp"

std::map<std::string, std::string> Colors::colors = {
    {"RESET", "\033[0m"},
    {"BLACK", "\033[30m"},
    {"RED", "\033[31m"},
    {"GREEN", "\033[32m"},
    {"YELLOW", "\033[33m"},
    {"BLUE", "\033[34m"},
    {"MAGENTA", "\033[35m"},
    {"CYAN", "\033[36m"},
    {"WHITE", "\033[37m"},
    {"BOLDBLACK", "\033[1m\033[30m"},
    {"BOLDRED", "\033[1m\033[31m"},
    {"BOLDGREEN", "\033[1m\033[32m"},
    {"BOLDYELLOW", "\033[1m\033[33m"},
    {"BOLDBLUE", "\033[1m\033[34m"},
    {"BOLDMAGENTA", "\033[1m\033[35m"},
    {"BOLDCYAN", "\033[1m\033[36m"},
    {"BOLDWHITE", "\033[1m\033[37m"}
};

std::string& Colors::getColor(std::string& color) {
    try {
        return Colors::colors.at(color);
    } catch (const std::out_of_range& err) {
        throw std::out_of_range("Cette couleur n'existe pas : " + color);
    }
}