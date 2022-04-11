#ifndef _ELEMENTS_CONFIG_HPP_
#define _ELEMENTS_CONFIG_HPP_

#include <string>
#include <map>
#include <fstream>
#include "element/ElementDisplay.hpp"
#include "util/Util.hpp"
#include "util/Color.hpp"

/**
* @file ElementsConfig.hpp
* @brief Fichier de classe ElementsConfig
*
* Fichier de classe ElementsConfig
*/

/**
* @class ElementsConfig
* @brief Classe ElementsConfig
*
* Cette classe permet d'avoir une configuration personnalisée pour l'affichage des Element
*/
class ElementsConfig {
    private:
        std::map<const std::string, ElementDisplay*> tiles_display;
        static const std::map<const char, const std::string> map_charstr;
    public:
        ElementsConfig(std::string file_name);
        ~ElementsConfig();

        /**
        * @brief Surcharge de l'opérateur d'array pour les char
        * @return un ElementDisplay&
        * @param char_key la clé
        * Renvoie un ElementDisplay&
        */
        const ElementDisplay& operator[](const char char_key) const;

        /**
        * @brief Surcharge de l'opérateur d'array pour les std::string
        * @return un ElementDisplay&
        * @param str_key la clé
        * Renvoie un ElementDisplay&
        */
        const ElementDisplay& operator[](const std::string str_key) const;
};

#endif