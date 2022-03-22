#include "entity/Entity.hpp"

Entity::Entity(const ElementDisplay& display) : Element(display) {
    //
}

Entity::~Entity() {
    //
}

Position Entity::getPos() const {
    return this->pos;
}