#include "config/TilesConfig.hpp"
#include "util/Color.hpp"
#include "util/Util.hpp"
#include <stdexcept>
#include <fstream>
#include <iostream>

// Ici, on a le constructeur. On passe en paramètre le chemin relatif vers le fichier de configuration
TilesConfig::TilesConfig(std::string fileName) {
    std::fstream file(fileName);
    if (!file)
        throw std::invalid_argument("Ouverture du fichier impossible ou fichier inexistant");

    tiles = {
        {TileConfigKey("PLAYER", 'P'), NULL},
        {TileConfigKey("BOMB", 'O'), NULL},
        {TileConfigKey("EXPLOSION", '@'), NULL},
        {TileConfigKey("WALL", 'W'), NULL},
        {TileConfigKey("BROKENWALL", 'w'), NULL},
        {TileConfigKey("UNBREAKABLEWALL", 'I'), NULL},
        {TileConfigKey("MONSTER", 'M'), NULL},
        {TileConfigKey("GHOST", 'G'), NULL},
        {TileConfigKey("BOWMAN", 'B'), NULL},
        {TileConfigKey("MORELIFE", 'L'), NULL},
        {TileConfigKey("POWERUP", 'U'), NULL},
        {TileConfigKey("MOREBOMB", 'E'), NULL},
        {TileConfigKey("SPEEDUP", 'S'), NULL},
        {TileConfigKey("SCALEUP", 'R'), NULL},
        {TileConfigKey("AIM", 'X'), NULL},
        {TileConfigKey("AIR", '_'), NULL}
    };

    std::string buffer;
    size_t line = 1;

    while (getline(file, buffer)) {
        rm_spaces(buffer);
        int i = buffer.find("=");

        if (i == -1 || static_cast<size_t>(i) == buffer.size() - 1)
            throw std::invalid_argument("Configuration incomplète ou incorrecte : ligne " + std::to_string(line));

        std::string key = buffer.substr(0, i);
        char ch = buffer[i + 1];
        std::string color = buffer.substr(i + 2, buffer.size());
        
        for (auto& x : tiles) {
            if (x.first == key && x.second == NULL) {
                x.second = new TileConfigValue(ch, Color::getColor(color).getString());
            }
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

    file.clear();

    for (auto& x : tiles) {
        if (x.second == NULL) {
            x.second = new TileConfigValue(x.first.getChar());
            file << x.first.getStr() + " = " + x.second->getChar() + " WHITE" << std::endl;
        }
    }

    file.close();
}

TilesConfig::~TilesConfig() {
    for (auto& x : tiles) {
        delete x.second;
    }
}

TileConfigValue& TilesConfig::operator[](char charKey) {
    for (auto& x : tiles) {
        if (x.first == charKey) return *(x.second);
    }

    throw std::out_of_range("Explosion");
}

TileConfigValue& TilesConfig::operator[](std::string strKey) {
    for (auto& x : tiles) {
        if (x.first == strKey) return *(x.second);
    }

    throw std::out_of_range(std::string("Explosion ") + strKey);
}

void TilesConfig::print_tiles() {
    for (auto& x : tiles) {
        std::cout << x.first << " => " << x.second->to_str2() << std::endl;
    }
}