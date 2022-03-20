#include "entity/Entity.hpp"

Entity::Entity(TileConfigValue& display) : display(display) {
    //
}

Entity::~Entity() {
    //
}

std::ostream& operator<<(std::ostream& out, Entity& entity) {
    out << entity.display << Color::getColor("RESET");
    return out;
}

Position Entity::getPos() const {
    return this->pos;
}