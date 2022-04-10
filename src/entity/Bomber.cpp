#include "entity/Bomber.hpp"
#include "logic/Tile.hpp"

Bomber::Bomber(Tile* tile) : Mob(tile), scale(3), bombs(3), bombs_left(3), control_bombs(false) {
    //
}

Bomber::~Bomber() {
    if (tile != nullptr) tile->setEntity(nullptr);
    for (auto& x : belongings) {
        delete x;
    }
}

int Bomber::getScale() const {
    return scale;
}

int Bomber::getBombs() const {
    return bombs;
}

std::string Bomber::getStr() const {
    std::string ret;
    ret += Color::RED.getString() + "Vie : " + std::to_string(health) + Color::RESET.getString() + "\n";
    ret += Color::CYAN.getString() + "Vitesse : " + std::to_string(speed) + Color::RESET.getString() + "\n";
    ret += Color::BOLDRED.getString() + "Puissance : " + std::to_string(power) + Color::RESET.getString() + "\n";
    ret += Color::GREEN.getString() + "Bombes : " + std::to_string(bombs_left) + Color::RESET.getString() + "\n";
    ret += Color::YELLOW.getString() + "Explosion : " + std::to_string(scale) + Color::RESET.getString() + "\n";
    ret += Color::MAGENTA.getString() + "Contrôle : " + (control_bombs ? "OUI" : "NON") + Color::RESET.getString() + "\n";
    ret += Color::WHITE.getString() + "Ghost : " + (move_through ? "OUI" : "NON") + Color::RESET.getString() + "\n";

    return ret;
}

void Bomber::setScale(int scale) {
    this->scale = scale;
}

void Bomber::setBombs(int bombs) {
    this->bombs = bombs;
}

void Bomber::operator+=(const Item& item) {
    health += item.getHealth();
    speed += item.getSpeed();
    power += item.getPower();
    bombs += item.getBombs();
    bombs_left += item.getBombs();
    scale += item.getScale();
    if (!control_bombs) control_bombs = item.getControlBombs();
    if (!move_through) move_through = item.getMoveThrough();
}

void Bomber::addBombsLeft(int bombs) {
    bombs_left += bombs;
}