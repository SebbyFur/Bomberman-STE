#ifndef _COLOR_HPP_
#define _COLOR_HPP_

#include <string>
#include <map>
#include <ostream>

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
        static Color RESET;
        static Color BLACK;
        static Color RED;
        static Color GREEN;
        static Color YELLOW;
        static Color BLUE;
        static Color MAGENTA;
        static Color CYAN;
        static Color WHITE;
        static Color BOLDBLACK;
        static Color BOLDRED;
        static Color BOLDGREEN;
        static Color BOLDYELLOW;
        static Color BOLDBLUE;
        static Color BOLDMAGENTA;
        static Color BOLDCYAN;
        static Color BOLDWHITE;

        static const std::map<const std::string, Color&> colors;

        /**
        * @brief Méthode statique pour obtenir les couleurs depuis un std::string
        * @return un Color&
        *
        * Renvoie un Color& en fonction du std::string passé en paramètre
        */
        static Color& getColor(std::string color);

        /**
        * @brief Méthode pour obtenir un std::string depuis une couleur
        * @return un std::string
        *
        * Renvoie un std::string en fonction de l'objet Color
        */
        std::string getString() const;

        /**
        * @brief Méthode pour initialiser les couleurs
        */
        static void noColors();

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