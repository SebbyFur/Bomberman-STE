#include "logic/Tile.hpp"

Tile::Tile(Square* square) : explosion(NULL), entity(NULL), square(square) {
    //
}

Tile::Tile() : explosion(NULL), entity(NULL), square(NULL) {
    //
}

Tile::~Tile() {
    if (entity != NULL) delete entity;
    if (explosion != NULL) delete explosion;
    if (square != NULL) delete square;
}

int Tile::canPassThrough() const {
    return (square->isOpac() || entity->canMoveThrough());
}

Explosion* Tile::getExplosion() const {
    return explosion;    
}

Entity* Tile::getEntity() const {
    return entity;
}

Square* Tile::getSquare() const {
    return square;
}

void Tile::setExplosion(Explosion* explosion) {
    this->explosion = explosion;
}

void Tile::setEntity(Entity* entity) {
    this->entity = entity;
}

void Tile::setSquare(Square* square) {
    this->square = square;
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