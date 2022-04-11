#include "belonging/Bomb.hpp"
#include "belonging/Belonging.hpp"
#include "belonging/Explosion.hpp"
#include "entity/Player.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"
#include <algorithm>

Bomb::Bomb(Tile* tile, Entity* owner) : Belonging(tile, owner), countdown(5) {
    //
}

Bomb::~Bomb() {
    for (auto& x : belongings) {
        Tile* tile = x->getTile();
        delete tile->getExplosion();
        tile->setExplosion(nullptr);
    }

    belongings.clear();

    if (tile != nullptr) tile->setBomb(nullptr);
}

void Bomb::explode() {
    countdown = 0;
    Map* map = tile->getMap();
    int range = static_cast<Bomber*>(getOwner())->getScale();

    for (auto& x : {Direction::NORTH, Direction::EAST, Direction::SOUTH, Direction::WEST}) {
        int cd = range;
        tile->setBomb(nullptr);
        Position pos = getPos() + x;
        Tile* next_tile = map->getTileAtPos(pos);
        if (next_tile == nullptr) break;
        Square* square = next_tile->getSquare();

        while (!square->isOpac() && next_tile->getBomb() == nullptr && cd--) {
            Explosion* temp = next_tile->getExplosion();
            if (temp != nullptr) {
                Bomb* owner = dynamic_cast<Bomb*>(temp->getOwner());
                auto& belongings = owner->belongings;
                belongings.erase(std::find(belongings.begin(), belongings.end(), temp));
                next_tile->setExplosion(nullptr);
                delete temp;
            }

            Explosion* explosion = new Explosion(next_tile, this);
            explosion->nextTurn();
            next_tile->setExplosion(explosion);
            belongings.push_back(explosion);

            pos += x;
            next_tile = map->getTileAtPos(pos);
            square = next_tile->getSquare();
        }

        if (square->isDestroyable()) {
            Explosion* temp = next_tile->getExplosion();
            if (temp != nullptr) {
                Bomb* owner = dynamic_cast<Bomb*>(temp->getOwner());
                auto& belongings = owner->belongings;
                belongings.erase(std::find(belongings.begin(), belongings.end(), temp));
                next_tile->setExplosion(nullptr);
                delete temp;
            }

            Explosion* explosion = new Explosion(next_tile, this);
            explosion->nextTurn();
            next_tile->setExplosion(explosion);
            belongings.push_back(explosion);

            square->destroy();
        }

        Explosion* temp = tile->getExplosion();
        if (temp != nullptr) {
            Bomb* owner = dynamic_cast<Bomb*>(temp->getOwner());
            auto& belongings = owner->belongings;
            belongings.erase(std::find(belongings.begin(), belongings.end(), temp));
            tile->setExplosion(nullptr);
            delete temp;
        }

        Explosion* explosion = new Explosion(tile, this);
        explosion->nextTurn();
        tile->setExplosion(explosion);
        belongings.push_back(explosion);

        Bomb* bomb = next_tile->getBomb();
        if (bomb != nullptr) {
            bomb->setCountDown(1);
        }
    }
}

int Bomb::getCountDown() const {
    return countdown;
}

void Bomb::setCountDown(int countdown) {
    this->countdown = countdown;
}

bool Bomb::nextTurn() {
    if (--countdown == 0) {
        this->explode();
        dynamic_cast<Bomber*>(owner)->addBombsLeft(1);
    } else if (countdown == -1) {
        return true;
    }

    return false;
}

const ElementDisplay& Bomb::getDisplay() const {
    return this->tile->getMap()->getConfig()["BOMB"];
}