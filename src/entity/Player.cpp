#include "entity/Player.hpp"

Player::Player(TilesConfig& tiles) : Entity(tiles["PLAYER"]) {
    //
}

Player::~Player() {
    //
}

bool Player::canMoveThrough() const {
    return false;
}