#ifndef _TILECONFIG_
#define _TILECONFIG_

#include <string>

class TileConfig {
    private:
        char ch;
        std::string color;
    
    public:
        TileConfig(char ch = '#', const std::string& color = "WHITE");
        char getChar() const;
        std::string getColor() const;
        std::string to_str() const;
        std::string to_str2() const;
        friend std::ostream& operator<<(std::ostream& out, const TileConfig& t);
};

#endif