#ifndef _TILECONFIG_
#define _TILECONFIG_

#include <string>
#include "util/Color.hpp"

class TileConfigValue {
    private:
        char ch;
        std::string color;
    public:
        TileConfigValue(char ch = '#', const std::string& color = "\033[37m");
        char getChar() const;
        std::string getColor() const;
        std::string to_str() const;
        std::string to_str2() const;
        friend std::ostream& operator<<(std::ostream& out, const TileConfigValue& t);
};

#endif