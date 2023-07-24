#pragma once

class UserInput {
public:
    UserInput();

    void processInput();
    bool shouldQuit() const;

    double getPitchInput() const;
    double getRollInput() const;
    double getYawInput() const;

private:
    double pitchInput;
    double rollInput;
    double yawInput;
    bool quit;
};
