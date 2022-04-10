#include "belonging/Explosion.hpp"
#include "entity/Mob.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

Explosion::Explosion(Tile* tile, Entity* owner) : Belonging(tile, owner) {
    //
}

Explosion::~Explosion() {
    if (tile != nullptr) tile->setExplosion(nullptr);
}

bool Explosion::nextTurn() {
    Bomb* bomb = tile->getBomb();
    Mob* entity = dynamic_cast<Mob*>(tile->getEntity());
    Bomb* own = dynamic_cast<Bomb*>(owner);
    Mob* bomb_owner = dynamic_cast<Mob*>(own->getOwner());

    if (bomb != nullptr) {
        bomb->explode();
        bomb->setCountDown(0);
    }

    if (entity != nullptr) {
        entity->getAttacked(*bomb_owner);
    }

    return 0;
}

const ElementDisplay& Explosion::getDisplay() const {
    return this->tile->getMap()->getConfig()["EXPLOSION"];
}