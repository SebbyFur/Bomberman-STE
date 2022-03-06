#ifndef _COLORS_
#define _COLORS_

#include <string>
#include <map>

class Colors {
    private:
        static std::map<std::string, std::string> colors;
        Colors();
    public:
        static std::string& getColor(std::string& color);
};

#endif