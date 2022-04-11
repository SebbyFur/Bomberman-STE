#include "entity/Player.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"
#include "belonging/Bomb.hpp"
#include "util/Color.hpp"
#include "square/Aim.hpp"
#include <limits.h>

Player::Player(Tile* tile) : Bomber(tile) {
    //
}

Player::~Player() {
    //
}

void Player::placeBomb() {
    if (tile != nullptr && tile->getBomb() == nullptr && !tile->getSquare()->isOpac()) {
        Bomb* bomb = new Bomb(tile, this);
        tile->setBomb(bomb);
        belongings.push_back(bomb);
        --bombs_left;
    }
}

bool Player::nextTurn() {
    char c = '0';
    bool place_bomb = false;
    bool control_bombs = false;

    while (c != '8' && c != '4' && c != '6' && c != '2') {
        std::cin >> c;

        // Vider STDIN. Je pense que ce n'est pas toujours une bonne solution en fonction du système, mais je n'avais que ça en tête
        while (std::cin.get() != '\n');
        
        if (c == '5') place_bomb = true;
        if (c == '7') control_bombs = true;
        if (c == '9') exit(0);
    }

    Direction dir = Direction::getDirection(c);

    if (place_bomb && bombs_left) placeBomb();
    this->move(dir);

    Item* item = tile->getItem();
    if (item != nullptr) {
        *this += *item;
        tile->setItem(nullptr);
        delete item;
    }

    for (auto it = belongings.begin(); it != belongings.end(); it++) {
        Bomb* bomb = dynamic_cast<Bomb*>(*it);
        if (control_bombs) {
            if (this->control_bombs && bomb->getCountDown() != 0) bomb->setCountDown(1);
        } else if (this->control_bombs && bomb->getCountDown() != 0) {
            bomb->setCountDown(3);
        }

        if ((*it)->nextTurn() == 1) {
            delete *it;
            belongings.erase(it);
            it--;
        }
    }

    if (typeid(*(tile->getSquare())) == typeid(Aim) && tile->getMap()->getMobsLeft() == 0) {
        tile->getMap()->minusPlayersLost();
        return 1;
    }

    if (health <= 0) return 1;

    return 0;
}

const ElementDisplay& Player::getDisplay() const {
    return this->tile->getMap()->getConfig()["PLAYER"];
}

bool Player::canMoveThrough() const {
    return move_through;
}