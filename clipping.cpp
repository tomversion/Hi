/*
Write a menu driven C++ program to implement Cohen Southerland line clipping
algorithm by accepting a window and a line to be clipped against it.
 */
#include <graphics.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    int L, T, R, B;

    cout << "Enter the Clipping window Coordinates:" << endl;
    cin >> L >> T >> R >> B;
    float x1, y1, x2, y2;

        cout << "Enter the Line Coordinates:" << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    float op[2][4];

    if (x1 < L)
        op[0][3] = 1;
    else
        op[0][3] = 0;
    if (x1 > R)
        op[0][2] = 1;
    else
        op[0][2] = 0;
    if (y1 < T)
        op[0][0] = 1;
    else
        op[0][0] = 0;
    if (y1 > B)
        op[0][1] = 1;
    else
        op[0][1] = 0;
    if (x2 < L)
        op[1][3] = 1;
    else
        op[1][3] = 0;

    if (x2 > R)
        op[1][2] = 1;
    else
        op[1][2] = 0;
    if (y2 < T)
        op[1][0] = 1;
    else
        op[1][0] = 0;
    if (y2 > B)
        op[1][1] = 1;
    else
        op[1][1] = 0;
    initgraph(&gd, &gm, NULL);

    rectangle(L, T, R, B);
    line(x1, y1, x2, y2);
    delay(3000);
    cleardevice();
    float m = (y2 - y1) / (x2 - x1);

    cout << op[0][0] << op[0][1] << op[0][2] << op[0][3] << endl;
    cout << op[1][0] << op[1][1] << op[1][2] << op[1][3] << endl;

    if (!(op[0][0] == 0 && op[0][1] == 0 && op[0][2] == 0 && op[0][3] == 0 && op[1][0] == 0 && op[1][1] == 0 && op[1][2] == 0 && op[1][3] == 0))
    {
        if (((op[0][0] && op[1][0]) == 0) && ((op[0][1] && op[1][1]) == 0) && ((op[0][2] && op[1][2]) == 0) && ((op[0][3] && op[1][3]) == 0))
        {
            if (op[0][0] == 1)
            {
                x1 = x1 + (T - y1) / m;
                y1 = T;
            }
            if (op[0][1] == 1)

            {
                x1 = x1 + (B - y1) / m;
                y1 = B;
            }
            if (op[0][2] == 1)
            {
                y1 = y1 + m * (R - x1);
                x1 = R;
            }
            if (op[0][3] == 1)
            {
                y1 = y1 + m * (L - x1);
                x1 = L;
            }
            if (op[1][3] == 1)
            {
                y2 = y2 + m * (L - x2);
                x2 = L;
            }
            if (op[1][2] == 1)
            {
                y2 = y2 + m * (R - x2);
                x2 = R;
            }
            if (op[1][0] == 1)
            {
                x2 = x2 + (T - y2) / m;
                y2 = T;
            }
            if (op[1][1] == 1)
            {
                x2 = x2 + (B - y2) / m;
                y2 = B;
            }
        }
        else
        {

            x1 = x2 = y1 = y2 = 0;
        }
    }
    // outtextxy(100,100,"After Clipping:");
    rectangle(L, T, R, B); // LTRB
    line(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}