#include <iostream>
#include <graphics.h>

class Line
{
public:
    void ddaAlg(int x1, int y1, int x2, int y2)
    {
        int dx = x2 - x1;
        int dy = y2 - y1;

        int steps;
        if (abs(dx) > abs(dy))
        {
            steps = abs(dx);
        }
        else
        {
            steps = abs(dy);
        }

        float x = x1;
        float y = y1;

        float xinc = dx / (float)steps;
        float yinc = dy / (float)steps;

        for (int i = 0; i <= steps; i++)
        {
            putpixel(x,y, 14); // Plot the point
            x += xinc;
            y += yinc;
        }
    }
};

class Circle
{
public:
    void draw(int xc, int yc, int r)
    {
        int x = 0;
        int y = r;
        int p = 3 - 2 * r;
        plotCirclePoints(xc, yc, x, y);

        while (x < y)
        {
            x++;
            if (p > 0)
            {
                y--;
                p += 4 * (x - y) + 10;
            }
            else
            {
                p += 4 * x + 6;
            }
            plotCirclePoints(xc, yc, x, y);
        }
    }

private:
    void plotCirclePoints(int xc, int yc, int x, int y)
    {
        putpixel(xc + x, yc + y, 3);
        putpixel(xc - x, yc + y, 3);
        putpixel(xc + x, yc - y, 3);
        putpixel(xc - x, yc - y, 3);

        putpixel(xc + y, yc + x, 3);
        putpixel(xc - y, yc + x, 3);
        putpixel(xc + y, yc - x, 3);
        putpixel(xc - y, yc - x, 3);
    }
};

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    Line l;
    Circle c;

    // Drawing circles with different radii
    c.draw(250, 250, 100);
    c.draw(250, 250, 200);

    // Draw a line example (not necessary but added for reference)
    l.ddaAlg(250, 50, 78, 350);
    l.ddaAlg(250, 50, 422, 350);
    l.ddaAlg(78, 350, 422, 350);

    getch();
    closegraph(); // Corrected this line
    return 0;
}
