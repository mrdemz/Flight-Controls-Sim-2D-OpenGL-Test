#ifndef AIRCRAFTPOSITION_H
#define AIRCRAFTPOSITION_H

struct AircraftPosition {
    float x;
    float y;
    float z;

    AircraftPosition(float x = 0.0f, float y = 0.0f, float z = 0.0f);
    float getX() const;
    float getY() const;
    float getZ() const;
    void setX(float x);
    void setY(float y);
    void setZ(float z);
};

#endif // AIRCRAFTPOSITION_H

