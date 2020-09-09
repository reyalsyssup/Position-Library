#include "pos_utils.h"

using namespace plib;

// Constructors
Vector2::Vector2(double x, double y) {
    this->x = x;
    this->y = y;
}

Vector3::Vector3(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

// Vector 2

Vector2 Vector2::operator + (Vector2 vector) {
    Vector2 newVector(0, 0);
    newVector.x = x + vector.x;
    newVector.y = y + vector.y;
    return newVector;
}
Vector2 Vector2::operator - (Vector2 vector) {
    Vector2 newVector(0, 0);
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
    Vector2 newVector(0, 0);
    newVector.x = x += vector.x;
    newVector.y = y += vector.y;
    return newVector;
}
Vector2 Vector2::operator -= (Vector2 vector) {
    Vector2 newVector(0, 0);
    newVector.x = x -= vector.x;
    newVector.y = y -= vector.y;
    return newVector;
}



Vector3 Vector3::operator + (Vector3 vector) {
    Vector3 newVector(0, 0, 0);
    newVector.x = x + vector.x;
    newVector.y = y + vector.y;
    newVector.z = z + vector.z;
    return newVector;
}
Vector3 Vector3::operator - (Vector3 vector) {
    Vector3 newVector(0, 0, 0);
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
    Vector3 newVector(0, 0, 0);
    newVector.x = x += vector.x;
    newVector.y = y += vector.y;
    newVector.z = z += vector.z;
    return newVector;
}
Vector3 Vector3::operator -= (Vector3 vector) {
    Vector3 newVector(0, 0, 0);
    newVector.x = x -= vector.x;
    newVector.y = y -= vector.y;
    newVector.z = z -= vector.z;
    return newVector;
}