#ifndef _ELEMENTS_CONFIG_HPP_
#define _ELEMENTS_CONFIG_HPP_

#include <string>
#include <map>
#include <fstream>
#include "element/ElementDisplay.hpp"
#include "util/Util.hpp"
#include "util/Color.hpp"

class ElementsConfig {
    private:
        std::map<const std::string, ElementDisplay*> tiles_display;
        static const std::map<const char, const std::string> map_charstr;
    public:
        ElementsConfig(std::string file_name);
        ~ElementsConfig();
        const ElementDisplay& operator[](const char char_key) const;
        const ElementDisplay& operator[](const std::string str_key) const;
};

#endif