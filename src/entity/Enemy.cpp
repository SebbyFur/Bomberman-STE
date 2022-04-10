#include "entity/Enemy.hpp"
#include "logic/Tile.hpp"
#include "logic/Map.hpp"
#include "util/Random.hpp"
#include <cmath>

Enemy::Enemy(Tile* tile, int health, int power, int speed) : Mob(tile, health, power, speed) {
    cooldown = 0;
}

Enemy::~Enemy() {
    if (tile != nullptr) tile->setEntity(nullptr);
}

bool Enemy::nextTurn() {
    if (health <= 0) return true;

    if (cooldown != 0) {
        cooldown--;
        return false;
    }

    auto players = tile->getMap()->getPlayers();
    if (players.size() != 0) {
        int min = Position::distance(getPos(), players[0]->getPos());
        Player* follow = players[0];

        for (auto& x : players) {
            int dis = Position::distance(x->getPos(), getPos());
            if (min > dis) {
                min = dis;
                follow = x;
            }
        }

        if (min == 1 && Random::randRange(0, 2) >= 1) {
            follow->getAttacked(*this);
            cooldown = 3;
        }

        const Direction& mv = Direction::getDirection(getPos(), follow->getPos());
        if (Random::randRange(0, 10) > 5) move(mv);
    }

    return false;
}