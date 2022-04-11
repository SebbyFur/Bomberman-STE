#include "logic/Tile.hpp"

Tile::Tile(Square* square, Entity* entity, Map* map, const Position pos) : map(map), explosion(nullptr), bomb(nullptr), entity(entity), square(square), item(nullptr), pos(pos) {
    //
}

Tile::Tile(Map* map, const Position pos) : map(map), explosion(nullptr), bomb(nullptr), entity(nullptr), square(nullptr), item(nullptr), pos(pos) {
    //
}

Tile::~Tile() {
    if (entity != nullptr) delete entity;
    if (explosion != nullptr) delete explosion;
    if (bomb != nullptr) delete bomb;
    if (square != nullptr) delete square;
    if (item != nullptr) delete item;
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
    if (tile.explosion != nullptr) {
        out << *(tile.explosion);
    } else if (tile.entity != nullptr) {
        out << *(tile.entity);
    } else if (tile.bomb != nullptr) {
        out << *(tile.bomb);
    } else if (tile.item != nullptr) {
        out << *(tile.item);
    } else if (tile.square != nullptr) {
        out << *(tile.square);
    }

    return out;
}