#ifndef _COLOR_HPP_
#define _COLOR_HPP_

#include <string>
#include <map>

class Color {
    private:
        Color();
        Color(std::string color);
        std::string color;
    public:
        static const Color RESET;
        static const Color BLACK;
        static const Color RED;
        static const Color GREEN;
        static const Color YELLOW;
        static const Color BLUE;
        static const Color MAGENTA;
        static const Color CYAN;
        static const Color WHITE;
        static const Color BOLDBLACK;
        static const Color BOLDRED;
        static const Color BOLDGREEN;
        static const Color BOLDYELLOW;
        static const Color BOLDBLUE;
        static const Color BOLDMAGENTA;
        static const Color BOLDCYAN;
        static const Color BOLDWHITE;

        static const std::map<const std::string, const Color> colors;

        static const Color& getColor(std::string color);
        std::string getString() const;
        friend std::ostream& operator<<(std::ostream& out, const Color& color);
};

#endif