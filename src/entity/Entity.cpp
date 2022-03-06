#include "entity/Entity.hpp"

Entity::Entity(TileConfigValue& display) : display(display) {
    //
}

std::ostream& operator<<(std::ostream& out, Entity& entity) {
    out << entity.display;
    return out;
}