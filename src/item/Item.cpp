#include "item/Item.hpp"

Item::Item(Tile* tile, int health, int speed, int power, int scale, int bombs, bool control_bombs, bool move_through) : Element(tile), health(health), speed(speed), power(power), scale(scale), bombs(bombs), control_bombs(control_bombs), move_through(move_through) {
    //
}

Item::~Item() {
    //
}

int Item::getHealth() const {
    return health;
}

int Item::getSpeed() const {
    return speed;
}

int Item::getPower() const {
    return power;
}

int Item::getScale() const {
    return scale;
}

int Item::getBombs() const {
    return bombs;
}

bool Item::getControlBombs() const {
    return control_bombs;
}

bool Item::getMoveThrough() const {
    return move_through;
}