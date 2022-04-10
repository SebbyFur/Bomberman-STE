#include "belonging/Belonging.hpp"
#include "entity/Entity.hpp"

Belonging::Belonging(Tile* tile, Entity* owner) : Entity(tile), owner(owner) {
    //
}

Belonging::~Belonging() {
    //
}

Entity* Belonging::getOwner() const {
    return owner;
}