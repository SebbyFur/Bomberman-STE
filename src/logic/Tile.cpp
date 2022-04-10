#include "logic/Tile.hpp"

Tile::Tile(Square* square, Entity* entity, Map* map, const Position pos) : map(map), explosion(NULL), bomb(NULL), entity(entity), square(square), item(NULL), pos(pos) {
    //
}

Tile::Tile(Map* map, const Position pos) : map(map), explosion(NULL), bomb(NULL), entity(NULL), square(NULL), item(NULL), pos(pos) {
    //
}

Tile::~Tile() {
    if (entity != NULL) delete entity;
    if (explosion != NULL) delete explosion;
    if (bomb != NULL) delete bomb;
    if (square != NULL) delete square;
    if (item != NULL) delete item;
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

Item* Tile::getItem() const {
    return item;
}

Explosion* Tile::getExplosion() const {
    return explosion;
}

Bomb* Tile::getBomb() const {
    return bomb;
}

void Tile::setEntity(Entity* entity) {
    this->entity = entity;
}

void Tile::setSquare(Square* square) {
    this->square = square;
}

void Tile::setItem(Item* item) {
    this->item = item;
}

void Tile::setExplosion(Explosion* explosion) {
    this->explosion = explosion;
}

void Tile::setBomb(Bomb* bomb) {
    this->bomb = bomb;
}

std::ostream& operator<<(std::ostream& out, const Tile& tile) {
    if (tile.explosion != NULL) {
        out << *(tile.explosion);
    } else if (tile.entity != NULL) {
        out << *(tile.entity);
    } else if (tile.bomb != NULL) {
        out << *(tile.bomb);
    } else if (tile.item != NULL) {
        out << *(tile.item);
    } else if (tile.square != NULL) {
        out << *(tile.square);
    }

    return out;
}