#include "entity/Mob.hpp"
#include "logic/Tile.hpp"
#include "logic/Map.hpp"

Mob::Mob(Tile* tile) : Entity(tile), health(50), power(5), speed(1), move_through(false) {
    //
}

Mob::Mob(Tile* tile, int health, int power, int speed) : Entity(tile), health(health), power(power), speed(speed), move_through(false) {
    //
}

Mob::~Mob() {
    if (tile != nullptr) tile->setEntity(nullptr);
}

int Mob::getHealth() const {
    return health;
}

int Mob::getPower() const {
    return power;
}

int Mob::getSpeed() const {
    return speed;
}

bool Mob::getMoveThrough() const {
    return move_through;
}

std::string Mob::getStr() const {
    std::string ret;
    ret += "Vie : " + std::to_string(health) + "\n";
    ret += "Puissance : " + std::to_string(power) + "\n";
    ret += "Vitesse : " + std::to_string(speed) + "\n";
    ret += "Ghost : " + std::to_string(move_through) + "\n";

    return ret;
}

void Mob::setHealth(int health) {
    this->health = health;
}

void Mob::setPower(int power) {
    this->power = power;
}

void Mob::setSpeed(int speed) {
    this->speed = speed;
}

void Mob::setMoveThrough(bool move_through) {
    this->move_through = move_through;
}

void Mob::move(const Direction dir) {
    Map* map = tile->getMap();
    Position next_pos = this->getPos() + dir;

    Tile* next_tile = map->getTileAtPos(next_pos);
    if (next_tile != nullptr && next_tile->getEntity() == nullptr && (!next_tile->getSquare()->isOpac() || canMoveThrough())) {
        map->getTileAtPos(getPos())->setEntity(nullptr);
        this->tile = next_tile;
        next_tile->setEntity(this);
    }
}

void Mob::getAttacked(const Mob& mob) {
    this->health -= mob.power;
    if (health < 0) health = 0;
}

std::ostream& operator<<(std::ostream& out, const Mob& mob) {
    out << mob.getStr();
    return out;
}

void Mob::operator+=(const Item& item) {
    health += item.getHealth();
    speed += item.getSpeed();
    power += item.getPower();
    if (!move_through) move_through = item.getMoveThrough();
}