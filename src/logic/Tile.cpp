#include "logic/Tile.hpp"

Tile::Tile(Square* square) : explosion(NULL), entity(NULL), square(square) {
    //
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