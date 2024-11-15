/*
Write C++ program to generate fractal patterns by using Kochcurves.
*/

#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

void koch(int x1, int y1, int x2, int y2, int it)
{
    if (it == 0)
    {
        line(x1, y1, x2, y2);
    }
    else
    {
        int x3 = (2 * x1 + x2) / 3;
        int y3 = (2 * y1 + y2) / 3;
        int x4 = (x1 + 2 * x2) / 3;
        int y4 = (y1 + 2 * y2) / 3;
        int x = x3 + (x4 - x3) * cos(M_PI / 3) + (y4 - y3) * sin(M_PI / 3);
        int y = y3 - (x4 - x3) * sin(M_PI / 3) + (y4 - y3) * cos(M_PI / 3);
        koch(x1, y1, x3, y3, it - 1);
        koch(x3, y3, x, y, it - 1);
        koch(x, y, x4, y4, it - 1);
        koch(x4, y4, x2, y2, it - 1);
    }
}
int main()
{
    int gd = DETECT, gm;
    int x1 = 100, y1 = 357, x2 = 500, y2 = 357;
    int i;
    float angle = M_PI / 3;
    cout << "ENTER THE NO OF ITERATIONS :- ";
    cin >> i;

    int x3 = x1 + (x2 - x1) * cos(angle) + (y2 - y1) * sin(angle);
    int y3 = y1 - (x2 - x1) * sin(angle) + (y2 - y1) * cos(angle);
    initgraph(&gd, &gm, NULL);
    koch(x2, y2, x1, y1, i);
    koch(x1, y1, x3, y3, i);
    koch(x3, y3, x2, y2, i);
    delay(3000);
    setfillstyle(1, WHITE);
    floodfill(300, 300, WHITE);
    getch();
    closegraph();
}