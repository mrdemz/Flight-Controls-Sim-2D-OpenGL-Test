#include "AircraftOrientation.h"

AircraftOrientation::AircraftOrientation(float pitch, float roll, float yaw)
    : pitch(pitch), roll(roll), yaw(yaw) {}

float AircraftOrientation::getPitch() const {
    return pitch;
}

float AircraftOrientation::getRoll() const {
    return roll;
}

float AircraftOrientation::getYaw() const {
    return yaw;
}

void AircraftOrientation::setPitch(float pitch) {
    this->pitch = pitch;
}

void AircraftOrientation::setRoll(float roll) {
    this->roll = roll;
}

void AircraftOrientation::setYaw(float yaw) {
    this->yaw = yaw;
}
