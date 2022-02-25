#include "Config.hpp"
#include "TileConfig.hpp"
#include "Colors.hpp"
#include <stdexcept>
#include <string>
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
    std::fstream file(fileName);
    if (!file) throw std::invalid_argument("Ouverture du fichier impossible ou fichier inexistant");
    std::string tmp;
    int line = 1;

    // On parse le contenu de chaque ligne pour récupérer séparement la clé, le caractère et la couleur
    while (std::getline(file, tmp)) {
        rm_spaces(tmp);
        int i = tmp.find("=");

        if (i == -1 || static_cast<size_t>(i) == tmp.size() - 1)
            throw std::invalid_argument("Configuration incomplète ou incorrecte : ligne " + std::to_string(line));

        std::string key = tmp.substr(0, i);
        char ch = tmp[i + 1];
        std::string color = tmp.substr(i + 2, tmp.size());

        // Si la clé n'est pas dans l'objet tiles, alors on l'ajoute avec son caractère et sa couleur. Sinon, on n'ajoute rien
        if (tiles.find(key) == tiles.end()) {
            tiles.insert(std::pair<std::string, TileConfig>(key, TileConfig(ch, color)));
        }

        line++;
    }
    
    //On retire les flags pour EOF, et on va 1 caractère avant la fin du fichier pour vérifier s'il s'agit d'un retour à la ligne
    file.clear();
    file.seekg(-1, std::ios::end);
    bool isStart = file.get() == '\n';

    //S'il ne s'agit pas d'un retour à la ligne, on l'ajoute. Autrement, on n'ajoute rien
    file.seekg(0, std::ios::end);
    if (!isStart) file << "\n";
    
    /*Ici, on itère sur toutes les tiles de la configuration par défaut, et si l'une des clés n'existe pas dans les tiles générés,
    on ajoute la tile de configuration par défaut aux tiles*/
    std::map<std::string, TileConfig>::iterator ptr = defaultTiles.begin();
    while (ptr != defaultTiles.end()) {
        if (tiles.find(ptr->first) == tiles.end()) {
            tiles.insert(*ptr);
            file << (ptr->first + " = " + (ptr->second).to_str2()) << std::endl;
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