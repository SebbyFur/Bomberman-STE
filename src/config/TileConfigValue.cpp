#include "config/TileConfigValue.hpp"
#include <string>
#include <iostream>

TileConfigValue::TileConfigValue(char ch, const std::string& color) : ch(ch), color(color) {
    //
}

char TileConfigValue::getChar() const {
    return this->ch;
}

std::string TileConfigValue::getColor() const {
    return this->color;
}

std::string TileConfigValue::to_str() const {
    return this->color + this->ch;
}

std::ostream& operator<<(std::ostream& out, const TileConfigValue& t) {
    out << t.to_str();
    return out;
}

std::string TileConfigValue::to_str2() const {
    return this->ch + std::string(" ") + this->color;
}