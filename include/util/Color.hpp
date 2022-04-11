#ifndef _COLOR_HPP_
#define _COLOR_HPP_

#include <string>
#include <map>

/**
* @file Color.hpp
* @brief Fichier de classe Color
*
* Fichier de classe Color
*/

/**
* @class Color
* @brief Classe Color
*
* Cette classe répertorie toutes les couleurs existantes.
*/
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

        /**
        * @brief Méthode statique pour obtenir les couleurs depuis un std::string
        * @return un Color&
        *
        * Renvoie un Color& en fonction du std::string passé en paramètre
        */
        static const Color& getColor(std::string color);

        /**
        * @brief Méthode pour obtenir un std::string depuis une couleur
        * @return un std::string
        *
        * Renvoie un std::string en fonction de l'objet Color
        */
        std::string getString() const;

        /**
        * @brief Surcharge de l'opérateur de flux sortant
        * @return un std::ostream&
        * @param out le flux
        * @param color la Color à afficher
        * Renvoie un std::ostream&
        */
        friend std::ostream& operator<<(std::ostream& out, const Color& color);
};

#endif