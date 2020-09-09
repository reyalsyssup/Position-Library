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



Vector3 Vector3::operator + (Vector3 vector) {
    Vector3 newVector;
    newVector.x = x + vector.x;
    newVector.y = y + vector.y;
    newVector.z = z + vector.z;
    return newVector;
}
Vector3 Vector3::operator - (Vector3 vector) {
    Vector3 newVector;
    newVector.x = x - vector.x;
    newVector.y = y - vector.y;
    newVector.z = z - vector.z;
    return newVector;
}

bool Vector3::operator == (Vector3 vector) {
    return x == vector.x && y == vector.y && z == vector.z;
}
bool Vector3::operator != (Vector3 vector) {
    return x != vector.x && y != vector.y && vector.z != z;
}

Vector3 Vector3::operator += (Vector3 vector) {
    Vector3 newVector;
    newVector.x = x += vector.x;
    newVector.y = y += vector.y;
    newVector.z = z += vector.z;
    return newVector;
}
Vector3 Vector3::operator -= (Vector3 vector) {
    Vector3 newVector;
    newVector.x = x -= vector.x;
    newVector.y = y -= vector.y;
    newVector.z = z -= vector.z;
    return newVector;
}