#include "element/ElementsConfig.hpp"

const std::map<const char, const std::string> ElementsConfig::map_charstr = {
    {'P', "PLAYER"},
    {'O', "BOMB"},
    {'@', "EXPLOSION"},
    {'W', "WALL"},
    {'w', "BROKENWALL"},
    {'I', "UNBREAKABLEWALL"},
    {'M', "MONSTER"},
    {'G', "GHOST"},
    {'B', "BOWMAN"},
    {'L', "MORELIFE"},
    {'U', "POWERUP"},
    {'E', "MOREBOMB"},
    {'Y', "CONTROLBOMBS"},
    {'#', "MOVETHROUGH"},
    {'S', "SPEEDUP"},
    {'R', "SCALEUP"},
    {'X', "AIM"},
    {'_', "AIR"}
};

ElementsConfig::ElementsConfig(std::string file_name) {
    for (auto& x : ElementsConfig::map_charstr) {
        tiles_display.insert(std::pair<const std::string, ElementDisplay*>(x.second, nullptr));
    }

    std::fstream file(file_name);
    if (!file) {
        file.open(file_name, std::fstream::app);
        file.close();
        file.open(file_name);
        if (!file) throw std::invalid_argument("Ouverture du fichier impossible ou fichier inexistant");
    }


    std::string line;
    int line_count = 1;

    while (getline(file, line)) {
        rm_spaces(line);

        size_t i = line.find("=");

        if (i == -1lu || i == line.size() - 1)
            throw std::invalid_argument("Configuration incomplète ou incorrecte : ligne " + std::to_string(line_count));

        std::string key = line.substr(0, i);
        char ch = line[i + 1];
        std::string color = line.substr(i + 2, line.size());

        auto x = tiles_display.find(key);
        if (x != tiles_display.end() && x->first == key && x->second == nullptr) {
            x->second = new ElementDisplay(ch, Color::getColor(color));
        }

        line_count++;
    }

    //On retire le flag End Of File, et on va 1 caractère avant la fin du fichier pour vérifier s'il s'agit d'un retour à la ligne
    file.clear();
    file.seekg(-1, std::ios::end);
    bool is_start = file.get() == '\n';

    //S'il ne s'agit pas d'un retour à la ligne, on l'ajoute. Autrement, on n'ajoute rien
    file.seekg(0, std::ios::end);
    if (!is_start) file << "\n";

    file.clear();

    for (auto& x : tiles_display) {
        if (x.second == nullptr) {
            const char ch = std::find_if(ElementsConfig::map_charstr.begin(), ElementsConfig::map_charstr.end(),
            [&x](auto y) {
                return y.second == x.first;
            })->first;

            x.second = new ElementDisplay(ch, Color::WHITE);
            file << x.first << " = " << ch << " WHITE\n";
        }
    }
}

ElementsConfig::~ElementsConfig() {
    for (auto& x : tiles_display) {
        if (x.second != nullptr) delete x.second;
    }
}

const ElementDisplay& ElementsConfig::operator[](const char char_key) const {
    return *(tiles_display.at(ElementsConfig::map_charstr.at(char_key)));
}

const ElementDisplay& ElementsConfig::operator[](const std::string str_key) const {
    return *(tiles_display.at(str_key));
}