#include "square/BrokenWall.hpp"
#include "square/Air.hpp"
#include "square/Aim.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"
#include "util/Random.hpp"
#include "item/ItemMap.hpp"

BrokenWall::BrokenWall(Tile* tile) : Square(tile) {
    //
}

BrokenWall::~BrokenWall() {
    //
}

const ElementDisplay& BrokenWall::getDisplay() const {
    return this->tile->getMap()->getConfig()["BROKENWALL"];
}

bool BrokenWall::isDestroyable() const {
    return true;
}

void BrokenWall::destroy() {
    int rand = Random::randRange(1, 1000);

    if (rand >= 600) {
        tile->setItem(rand_item(tile));
    }

    if (rand >= 500 && tile->getMap()->hasAimSpawned() == false) {
        tile->setSquare(new Aim(tile));
        tile->getMap()->setAimSpawned(true);
    } else {
        tile->setSquare(new Air(tile));
    }

    delete this;
}

bool BrokenWall::isOpac() const {
    return true;
}