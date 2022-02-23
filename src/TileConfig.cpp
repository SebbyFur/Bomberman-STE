#include "TileConfig.hpp"
#include <string>
#include <iostream>

TileConfig::TileConfig(char ch, const std::string& color) : ch(ch), color(color) {
    this->color = "WHITE";
}

char TileConfig::getChar() const {
    return this->ch;
}

std::string TileConfig::getColor() const {
    return this->color;
}

std::string TileConfig::to_str() const {
    return this->color + this->ch;
}

std::ostream& operator<<(std::ostream& out, const TileConfig& t) {
    out << t.to_str();
    return out;
}

std::string TileConfig::to_str2() const {
    return this->ch + std::string(" ") + this->color;
}