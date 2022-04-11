#ifndef _ELEMENT_DISPLAY_HPP_
#define _ELEMENT_DISPLAY_HPP_

#include <iostream>
#include "element/ElementDisplay.hpp"
#include "util/Color.hpp"

/**
* @file ElementDisplay.hpp
* @brief Fichier de classe ElementDisplay
*
* Fichier de classe ElementDisplay
*/

/**
* @class ElementDisplay
* @brief Classe ElementDisplay
*
* Cette classe permet l'affichage des Element
*/
class ElementDisplay {
    protected:
        const char ch;
        const Color& color;
    public:
        ElementDisplay(const char ch, const Color& color);

        /**
        * @brief Surcharge de l'opérateur de flux sortant
        * @return un std::ostream&
        * @param out le flux
        * @param element l'ElementDisplay à afficher
        * Renvoie un std::ostream&
        */
        friend std::ostream& operator<<(std::ostream& out, const ElementDisplay& disp);
};

#endif