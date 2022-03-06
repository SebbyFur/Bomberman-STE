#include "config/TileConfigKey.hpp"

TileConfigKey::TileConfigKey(std::string strKey, char charKey) : strKey(strKey), charKey(charKey) {
    //
}

char TileConfigKey::getChar() const {
    return this->charKey;
}

std::string TileConfigKey::getStr() const {
    return this->strKey;
}

std::string TileConfigKey::to_str() const {
    return strKey + " " + charKey;
}

bool TileConfigKey::operator<(const TileConfigKey& key) const {
    return this->strKey < key.strKey;
}

bool TileConfigKey::operator==(char charKey) const {
    return this->charKey == charKey;
}

bool TileConfigKey::operator==(std::string strKey) const {
    return this->strKey == strKey;
}

std::ostream& operator<<(std::ostream& out, const TileConfigKey& key) {
    out << key.to_str();
    return out;
}