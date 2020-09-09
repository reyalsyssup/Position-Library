#include "pos_utils.h"
#include "math.h"

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

// functions
double Vector2::getXDist(Vector2 point1, Vector2 point2) {
    double dist = point1.x - point2.x;
    return dist < 0 ? dist *= -1 : dist;
}

double Vector2::getLength(Vector2 point1, Vector2 point2) {
    double length = 0.0;
    double run = point1.x - point2.x;
    double rise = point1.y - point2.y;
    run = run > 0 ? run *= -1 : run;
    rise = rise > 0 ? rise *= -1 : rise;
    return sqrt(run*run + rise*rise);
}

// operators

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

// Vector 3

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