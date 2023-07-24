#ifndef FLIGHTDYNAMICS_H
#define FLIGHTDYNAMICS_H

#include "AircraftPosition.h"
#include "AircraftOrientation.h"

struct AircraftState {
    double pitch;
    double roll;
    double yaw;
};

class FlightDynamics {
public:
    FlightDynamics();
    void update(double deltaTime, double pitchInput, double rollInput, double yawInput);
    const AircraftPosition& getAircraftPosition() const;
    const AircraftOrientation& getAircraftOrientation() const;

private:
    AircraftState state;
    AircraftPosition position;
    AircraftOrientation orientation;
};

#endif // FLIGHTDYNAMICS_H
