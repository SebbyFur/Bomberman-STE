#include "util/Color.hpp"

Color::Color(std::string color) : color(color) {
    //
}

Color Color::getColor(const std::string color) {
    return *(Color::colors[color]);
}

std::string Color::getString() {
    return this->color;
}

std::ostream& operator<<(std::ostream& out, const Color& color) {
    out << color.color;
    return out;
}

const Color Color::RESET = Color("\033[0m");
const Color Color::BLACK = Color("\033[30m");
const Color Color::RED = Color("\033[31m");
const Color Color::GREEN = Color("\033[32m");
const Color Color::YELLOW = Color("\033[33m");
const Color Color::BLUE = Color("\033[34m");
const Color Color::MAGENTA = Color("\033[35m");
const Color Color::CYAN = Color("\033[36m");
const Color Color::WHITE = Color("\033[37m");
const Color Color::BOLDBLACK = Color("\033[1m\033[30m");
const Color Color::BOLDRED = Color("\033[1m\033[31m");
const Color Color::BOLDGREEN = Color("\033[1m\033[32m");
const Color Color::BOLDYELLOW = Color("\033[1m\033[33m");
const Color Color::BOLDBLUE = Color("\033[1m\033[34m");
const Color Color::BOLDMAGENTA = Color("\033[1m\033[35m");
const Color Color::BOLDCYAN = Color("\033[1m\033[36m");
const Color Color::BOLDWHITE = Color("\033[1m\033[37m");

std::map<const std::string, const Color*> Color::colors {
    {"RESET", &Color::RESET},
    {"BLACK", &Color::BLACK},
    {"RED", &Color::RED},
    {"GREEN", &Color::GREEN},
    {"YELLOW", &Color::YELLOW},
    {"BLUE", &Color::BLUE},
    {"MAGENTA", &Color::MAGENTA},
    {"CYAN", &Color::CYAN},
    {"WHITE", &Color::WHITE},
    {"BOLDBLACK", &Color::BOLDBLACK},
    {"BOLDRED", &Color::BOLDRED},
    {"BOLDGREEN", &Color::BOLDGREEN},
    {"BOLDYELLOW", &Color::BOLDYELLOW},
    {"BOLDBLUE", &Color::BOLDBLUE},
    {"BOLDMAGENTA", &Color::BOLDMAGENTA},
    {"BOLDCYAN", &Color::BOLDCYAN},
    {"BOLDWHITE", &Color::BOLDWHITE}
};