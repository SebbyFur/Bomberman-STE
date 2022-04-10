#include "item/MoveThrough.hpp"
#include "logic/Map.hpp"
#include "logic/Tile.hpp"

MoveThrough::MoveThrough(Tile* tile) : Item(tile, 0, 0, 0, 0, 0, 0, 1) {
    //
}

MoveThrough::~MoveThrough() {
    //
}

const ElementDisplay& MoveThrough::getDisplay() const {
    return this->tile->getMap()->getConfig()["MOVETHROUGH"];
}