#include "pos_utils.h"

using namespace plib;

Vector2 Vector2::operator + (Vector2 vector) {
    Vector2 newVector;
    newVector.x = x + vector.x;
    newVector.y = y + vector.y;
    return newVector;
}
Vector2 Vector2::operator - (Vector2 vector) {
    Vector2 newVector;
    newVector.x = x - vector.x;
    newVector.y = y - vector.y;
    return newVector;
}

bool Vector2::operator == (Vector2 vector) {
    return x == vector.x && y == vector.y;
}
bool Vector2::operator != (Vector2 vector) {
    return x != vector.x && y != vector.y;
}

Vector2 Vector2::operator += (Vector2 vector) {
    Vector2 newVector;
    newVector.x = x += vector.x;
    newVector.y = y += vector.y;
    return newVector;
}
Vector2 Vector2::operator -= (Vector2 vector) {
    Vector2 newVector;
    newVector.x = x -= vector.x;
    newVector.y = y -= vector.y;
    return newVector;
}