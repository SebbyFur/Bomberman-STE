#include "entity/Player.hpp"

Player::Player(const ElementsConfig& elements) : Entity(elements["PLAYER"]) {
    //
}

Player::~Player() {
    //
}

bool Player::canMoveThrough() const {
    return false;
}