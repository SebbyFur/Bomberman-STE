#include "logic/Tile.hpp"

Tile::Tile(Square* square, Entity* entity, Map* map, const Position pos) : map(map), explosion(NULL), entity(entity), square(square), pos(pos) {
    //
}

Tile::Tile(Map* map, const Position pos) : map(map), explosion(NULL), entity(NULL), square(NULL), pos(pos) {
    //
}

Tile::~Tile() {
    if (entity != NULL) delete entity;
    if (explosion != NULL) delete explosion;
    if (square != NULL) delete square;
}

Position Tile::getPos() const {
    return this->pos;
}

Map* Tile::getMap() const {
    return this->map;
}

Entity* Tile::getEntity() const {
    return entity;
}

Square* Tile::getSquare() const {
    return square;
}

void Tile::setEntity(Entity* entity) {
    this->entity = entity;
}

void Tile::setSquare(Square* square) {
    this->square = square;
}

void Tile::makeItExplode() {
    this->explosion = new Explosion(this);
}

std::ostream& operator<<(std::ostream& out, const Tile& tile) {
    if (tile.explosion != NULL) {
        out << *(tile.explosion);
    } else if (tile.entity != NULL) {
        out << *(tile.entity);
    } else if (tile.square != NULL) {
        out << *(tile.square);
    }

    return out;
}