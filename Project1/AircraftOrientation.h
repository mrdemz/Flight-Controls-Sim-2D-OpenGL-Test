#ifndef AIRCRAFTORIENTATION_H
#define AIRCRAFTORIENTATION_H

struct AircraftOrientation {
    float pitch;
    float roll;
    float yaw;

    AircraftOrientation(float pitch = 0.0f, float roll = 0.0f, float yaw = 0.0f);
    float getPitch() const;
    float getRoll() const;
    float getYaw() const;
    void setPitch(float pitch);
    void setRoll(float roll);
    void setYaw(float yaw);
};

#endif // AIRCRAFTORIENTATION_H
