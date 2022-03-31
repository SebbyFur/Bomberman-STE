#include "entity/Player.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

Player::Player(Tile* tile) : Entity(tile) {
    //
}

Player::~Player() {
    //
}

void Player::nextTurn() {
    //
}

const ElementDisplay& Player::getDisplay() const {
    return this->tile->getMap()->getConfig()["PLAYER"];
}

bool Player::canMoveThrough() const {
    return false;
}