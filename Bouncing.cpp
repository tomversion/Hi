/*
Write a C++ program to implement bouncing ball using sine wave form.
*/

#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    delay(500); // Wait before starting

    int x = 50, y = 400; // Starting position of the ball
    float a = 2.5;       // Amplitude of sine wave
    int angle = 0;       // Starting angle for sine wave calculation
    char buffer[20];     // Buffer to hold formatted output strings

    while (true)
    {
        cleardevice(); // Clear the screen

        // Calculate Y position using sine wave
        int yOffset = round(a * sin(angle * (M_PI / 180)));
        y -= yOffset; // Update ball's Y position

        // Draw horizontal ground line
        line(5, 441, 635, 441);

        // Draw the ball
        setcolor(BLUE);
        circle(x, y, 40);      // Draw the ball with radius 40
        floodfill(x, y, BLUE); // Fill the ball with color

        // Output X and Y position values directly
        sprintf(buffer, "X = %d", x);
        outtextxy(400, 15, buffer);
        sprintf(buffer, "Y = %d", y);
        outtextxy(400, 35, buffer);

        // Delay to make the motion visible
        delay(25);

        // Update angle and reset it after 360 degrees
        angle = (angle + 1) % 360;
        x++; // Move the ball to the right

        // If ball moves out of screen, reset its position
        if (x > 635)
        {
            x = 50;  // Reset to starting position
            y = 400; // Reset Y position to initial height
        }
    }

    closegraph(); // Close the graphics window
    return 0;
}
