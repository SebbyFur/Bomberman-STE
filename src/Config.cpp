#include "Config.hpp"
#include "TileConfig.hpp"
#include "Colors.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <map>


// Ici, en tant qu'attribut statique, on a la configuration par défaut
std::map<std::string, TileConfig> Config::defaultTiles {
    {"PLAYER", TileConfig('P')},
    {"BOMB", TileConfig('O')},
    {"EXPLOSION", TileConfig('@')},
    {"WALL", TileConfig('W')},
    {"BROKENWALL", TileConfig('w')},
    {"UNBREAKABLEWALL", TileConfig('I')},
    {"MONSTER", TileConfig('M')},
    {"GHOST", TileConfig('G')},
    {"BOWMAN", TileConfig('B')},
    {"MORELIFE", TileConfig('L')},
    {"POWERUP", TileConfig('U')},
    {"MOREBOMB", TileConfig('E')},
    {"SPEEDUP", TileConfig('S')},
    {"SCALEUP", TileConfig('R')},
    {"AIM", TileConfig('X')}
};

// Ici, on a le constructeur. On passe en paramètre le chemin relatif vers le fichier de configuration
Config::Config(std::string fileName) {
    std::ifstream fileInput(fileName);
    std::string tmp;
    std::string delim = "=";

    // On parse le contenu de chaque ligne pour récupérer séparement la clé, le caractère et la couleur
    while (std::getline(fileInput, tmp)) {
        rm_spaces(tmp);
        int i = tmp.find(delim);

        std::string key = tmp.substr(0, i);
        char ch = tmp[i + 1];
        std::string color = tmp.substr(i + 2, tmp.size());

        // Si la clé n'est pas dans l'objet map, alors on l'ajoute avec son caractère et sa clé. Sinon, on n'ajoute rien
        if (defaultTiles.find(key) != defaultTiles.end())
            tiles.insert(std::pair<std::string, TileConfig>(key, TileConfig(ch, color)));
    }

    //On ouvre le fichier de configuration en mode ajout pour ajouter les valeurs manquantes (au cas où)
    std::ofstream fileOutput(fileName, std::ios_base::app);

    
    std::map<std::string, TileConfig>::iterator ptr = defaultTiles.begin();
    while (ptr != defaultTiles.end()) {
        if (tiles.find(ptr->first) == tiles.end()) {
            tiles.insert(*ptr);
            fileOutput << ptr->first + " = " + (ptr->second).to_str2() << std::endl;
        }
            
        ptr++;
    }
}

std::map<std::string, TileConfig>* Config::getTiles() {
    return &(this->tiles);
}

void Config::rm_spaces(std::string& str) {
    for (size_t x = 0; x < str.size(); x++) {
        if (str[x] == ' ') {
            for (size_t y = x; y < str.size() - 1; y++) {
                char c = str[y];
                str[y] = str[y + 1];
                str[y + 1] = c;
            }
        }
    }
}