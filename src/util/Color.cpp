#include "util/Color.hpp"

Color::Color(std::string color) : color(color) {
    //
}

Color& Color::getColor(const std::string color) {
    return Color::colors.at(color);
}

std::string Color::getString() const {
    return this->color;
}

std::ostream& operator<<(std::ostream& out, const Color& color) {
    out << color.color;
    return out;
}

Color Color::RESET = Color("\033[0m");
Color Color::BLACK = Color("\033[30m");
Color Color::RED = Color("\033[31m");
Color Color::GREEN = Color("\033[32m");
Color Color::YELLOW = Color("\033[33m");
Color Color::BLUE = Color("\033[34m");
Color Color::MAGENTA = Color("\033[35m");
Color Color::CYAN = Color("\033[36m");
Color Color::WHITE = Color("\033[37m");
Color Color::BOLDBLACK = Color("\033[1m\033[30m");
Color Color::BOLDRED = Color("\033[1m\033[31m");
Color Color::BOLDGREEN = Color("\033[1m\033[32m");
Color Color::BOLDYELLOW = Color("\033[1m\033[33m");
Color Color::BOLDBLUE = Color("\033[1m\033[34m");
Color Color::BOLDMAGENTA = Color("\033[1m\033[35m");
Color Color::BOLDCYAN = Color("\033[1m\033[36m");
Color Color::BOLDWHITE = Color("\033[1m\033[37m");

void Color::noColors() {
    Color::RESET = Color("");
    Color::BLACK = Color("");
    Color::RED = Color("");
    Color::GREEN = Color("");
    Color::YELLOW = Color("");
    Color::BLUE = Color("");
    Color::MAGENTA = Color("");
    Color::CYAN = Color("");
    Color::WHITE = Color("");
    Color::BOLDBLACK = Color("");
    Color::BOLDRED = Color("");
    Color::BOLDGREEN = Color("");
    Color::BOLDYELLOW = Color("");
    Color::BOLDBLUE = Color("");
    Color::BOLDMAGENTA = Color("");
    Color::BOLDCYAN = Color("");
    Color::BOLDWHITE = Color("");
}

const std::map<const std::string, Color&> Color::colors {
    {"RESET", Color::RESET},
    {"BLACK", Color::BLACK},
    {"RED", Color::RED},
    {"GREEN", Color::GREEN},
    {"YELLOW", Color::YELLOW},
    {"BLUE", Color::BLUE},
    {"MAGENTA", Color::MAGENTA},
    {"CYAN", Color::CYAN},
    {"WHITE", Color::WHITE},
    {"BOLDBLACK", Color::BOLDBLACK},
    {"BOLDRED", Color::BOLDRED},
    {"BOLDGREEN", Color::BOLDGREEN},
    {"BOLDYELLOW", Color::BOLDYELLOW},
    {"BOLDBLUE", Color::BOLDBLUE},
    {"BOLDMAGENTA", Color::BOLDMAGENTA},
    {"BOLDCYAN", Color::BOLDCYAN},
    {"BOLDWHITE", Color::BOLDWHITE}
};