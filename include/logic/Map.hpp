#ifndef _MAP_HPP_
#define _MAP_HPP_

#include "logic/Tile.hpp"
#include "element/ElementsConfig.hpp"
#include "util/Position.hpp"
#include "entity/Player.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <fstream>

/**
* @file Map.hpp
* @brief Fichier de classe Map
*
* Fichier de classe Map
*/

/**
* @class Map
* @brief Classe Map
*
* Cette classe permet de charger une Map à partir d'un fichier et de placer tous les Element étant dessus.
*/
class Map {
    private:
        int width;
        int height;
        int logic_size;

        std::string strmap;
        Tile** logic_map;

        const ElementsConfig& display;

        std::vector<Entity*> mobs;
        std::vector<Player*> players;

        bool aim_spawned;
        int players_lost;
    public:
        Map(std::string path, const ElementsConfig& display);
        ~Map();

        /**
        * @brief Getter du std::string& de la map
        * @return un std::string&
        *
        * Renvoie la map sous forme d'un std::string&
        */
        const std::string& get_str() const;

        /**
        * @brief Getter du Tile* à la position x; y
        * @return un Tile*
        *
        * Renvoie le Tile* aux positions x et y dans la map, à condition que les coordonnées soient correctes
        */
        Tile* getTileAtPos(int x, int y) const;

        /**
        * @brief Getter du Tile* à la Position(x, y)
        * @return un Tile*
        *
        * Renvoie le Tile* à la Position(x, y) dans la map, à condition que les coordonnées soient correctes
        */
        Tile* getTileAtPos(const Position pos) const;

        /**
        * @brief Getter du vecteur de Player*
        * @return un std::vector<Player*>
        *
        * Renvoie le vecteur des Player* en train de jouer
        */
        std::vector<Player*> getPlayers() const;

        /**
        * @brief Getter du nombre de Mobs restants (excluant les joueurs)
        * @return un entier
        *
        * Renvoie la taille du std::vector<Entity*> mobs;
        */
        int getMobsLeft() const;

        /**
        * @brief Méthode pour décrémenter le nombre de joueurs ayant perdu
        *
        * Décrémente le nombre de joueurs ayant perdu (si le nombre de joueurs ayant perdu est 0 à la fin, alors c'est la victoire)
        */
        void minusPlayersLost();

        /**
        * @brief Getter de la configuration des Elements
        * @return un ElementsConfig&
        *
        * Renvoie un ElementsConfig&. Utilisé dans toutes les classes Entity pour les afficher.
        */
        const ElementsConfig& getConfig() const;

        /**
        * @brief Getter pour savoir si l'Aim est déjà apparu
        * @return un booléen
        *
        * Renvoie un ElementsConfig&. Utilisé dans toutes les classes Entity pour les afficher.
        */
        bool hasAimSpawned() const;

        /**
        * @brief Setter de l'attribut aim_spawned
        * @param aim_spawned un entier
        *
        * Setter de l'attribut aim_spawned. Utilisé lorsque l'Aim est apparu
        */
        void setAimSpawned(int aim_spawned);

        /**
        * @brief Méthode "nextTurn" de la Map.
        * @return -1 ou le nombre de joueurs ayant perdu
        *
        * On appelle cette méthode en boucle jusqu'à ce que le résultat soit différent de -1 (défaite pour 0, victoire pour > 0)
        */
        int tick();

        /**
        * @brief Surcharge de l'opérateur de flux sortant
        * @return un std::ostream&
        * @param out le flux
        * @param map la Map à afficher
        * Renvoie un std::ostream&
        */
        friend std::ostream& operator<<(std::ostream& out, const Map& map);
};

#endif