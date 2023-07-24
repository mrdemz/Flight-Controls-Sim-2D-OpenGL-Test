#include "AircraftPosition.h"

AircraftPosition::AircraftPosition(float x, float y, float z)
    : x(x), y(y), z(z) {}

float AircraftPosition::getX() const {
    return x;
}

float AircraftPosition::getY() const {
    return y;
}

float AircraftPosition::getZ() const {
    return z;
}

void AircraftPosition::setX(float x) {
    this->x = x;
}

void AircraftPosition::setY(float y) {
    this->y = y;
}

void AircraftPosition::setZ(float z) {
    this->z = z;
}
