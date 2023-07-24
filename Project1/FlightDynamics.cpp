#include "FlightDynamics.h"
#include <algorithm> // For std::max and std::min
#include <glm/trigonometric.hpp>


const double MAX_PITCH_ANGLE = 30.0;  // Maximum pitch angle in degrees
const double MAX_ROLL_ANGLE = 30.0;   // Maximum roll angle in degrees
const double MAX_YAW_ANGLE = 30.0;    // Maximum yaw angle in degrees
const double MAX_SPEED = 1.0;         // Maximum speed of the aircraft

FlightDynamics::FlightDynamics() {
    // Initialize the state and other variables as needed
    state.pitch = 0.0;
    state.roll = 0.0;
    state.yaw = 0.0;

    position.setX(0.0);
    position.setY(0.0);
    position.setZ(0.0);

    orientation.setPitch(0.0);
    orientation.setRoll(0.0);
    orientation.setYaw(0.0);
}

void FlightDynamics::update(double deltaTime, double pitchInput, double rollInput, double yawInput) {
    // Update the aircraft state based on control inputs

    // Apply pitch input
    state.pitch += pitchInput * deltaTime;
    state.pitch = std::max(-MAX_PITCH_ANGLE, std::min(state.pitch, MAX_PITCH_ANGLE));

    // Apply roll input
    state.roll += rollInput * deltaTime;
    state.roll = std::max(-MAX_ROLL_ANGLE, std::min(state.roll, MAX_ROLL_ANGLE));

    // Apply yaw input
    state.yaw += yawInput * deltaTime;
    state.yaw = std::max(-MAX_YAW_ANGLE, std::min(state.yaw, MAX_YAW_ANGLE));

    // Update the position and orientation based on the current state

    // Update the position based on the orientation and speed
    double speed = MAX_SPEED; // You can adjust the speed as needed
    double pitchRad = glm::radians(orientation.getPitch()*2);
    double yawRad = glm::radians(orientation.getYaw()*2);
    double rollRad = glm::radians(orientation.getRoll()*2);

 /*   double dx = speed * glm::cos(pitchRad) * glm::cos(yawRad);
    double dy = speed * glm::sin(pitchRad);
    double dz = speed * glm::cos(pitchRad) * glm::sin(yawRad);*/

    position.setX(position.getX());
    position.setY(position.getY());
    position.setZ(position.getZ());

    // Update the orientation based on the state
    orientation.setPitch(static_cast<float>(state.pitch));
    orientation.setRoll(static_cast<float>(state.roll));
    orientation.setYaw(static_cast<float>(state.yaw));
}

const AircraftPosition& FlightDynamics::getAircraftPosition() const {
    return position;
}

const AircraftOrientation& FlightDynamics::getAircraftOrientation() const {
    return orientation;
}
