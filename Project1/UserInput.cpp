#include "UserInput.h"
#include <iostream>
#include <conio.h>

UserInput::UserInput()
    : pitchInput(0.0), rollInput(0.0), yawInput(0.0), quit(false) {
}

void UserInput::processInput() {
    if (_kbhit()) {
        char key = _getch();

        // Handle pitch input
        if (key == 'w' && pitchInput <= 300) {
            pitchInput += 10.0;
        }
        else if (key == 's' && pitchInput >= -300) {
            pitchInput -= 10.0;
        }
        else {
            pitchInput += 0.0;
        }

        // Handle roll input
        if (key == 'a' && rollInput >= -300) {
            rollInput -= 10.0;
        }
        else if (key == 'd' && rollInput <= 300) {
            rollInput += 10.0;
        }
        else {
            rollInput += 0.0;
        }

        // Handle yaw input
        if (key == 'q' && yawInput >= -300) {
            yawInput -= 10.0;
        }
        else if (key == 'e'&& yawInput <= 300) {
            yawInput += 10.0;
        }
        else {
            yawInput += 0.0;
        }

        std::cout << "Pitch Input: " << pitchInput << ", Roll Input: " << rollInput << ", Yaw Input: " << yawInput << std::endl;
    }
}

bool UserInput::shouldQuit() const {
    return quit;
}

double UserInput::getPitchInput() const {
    return pitchInput;
}

double UserInput::getRollInput() const {
    return rollInput;
}

double UserInput::getYawInput() const {
    return yawInput;
}
