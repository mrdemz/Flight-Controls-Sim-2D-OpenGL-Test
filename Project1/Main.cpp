#include "FlightDynamics.h"
#include "UserInput.h"
#include "GraphicsRenderer.h"

int main()
{
    // Initialize flight dynamics model
    FlightDynamics flightDynamics;

    // Initialize user input handler
    UserInput userInput{};

    // Initialize graphics renderer
    GraphicsRenderer graphicsRenderer;

    // Render loop
    while (true)
    {
        // Handle user input
        userInput.processInput();

        // Get delta time
        double deltaTime = 0.00016; // Replace with your actual delta time calculation

        // Update flight dynamics based on delta time and user input
        flightDynamics.update(deltaTime, userInput.getPitchInput(), userInput.getRollInput(), userInput.getYawInput());

        // Render the scene
        graphicsRenderer.render(flightDynamics.getAircraftPosition(), flightDynamics.getAircraftOrientation());

        // Add any additional game logic or simulation steps here

        // Check for exit condition (e.g., user presses a key to quit)
        if (userInput.shouldQuit())
        {
            break;
        }
    }

    // Cleanup and exit
    // ...

    return 0;
}