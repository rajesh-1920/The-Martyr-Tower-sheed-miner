// Author : Rajesh Biswas
// Cf     : rajesh_1920
// Date   : 21/02/2024

#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

void draw()
{
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(285, 140, 60);
    floodfill(286, 140, RED);

    setcolor(GREEN);
    for (int i = 70; i <= 75; i++)
        line(145, i, 160, i);
    for (int i = 195; i <= 200; i++)
        line(145, i, 160, i);
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(150, 50, 450, 230);
    floodfill(151, 51, GREEN);

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(285, 140, 60);
    floodfill(286, 140, RED);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    rectangle(140, 40, 146, 450);
    floodfill(141, 51, YELLOW);
    circle(143, 35, 10);
    floodfill(143, 36, YELLOW);

    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
    line(143, 425, 115, 470);
    line(143, 425, 167, 470);
    line(115, 470, 167, 470);
    floodfill(141, 450, DARKGRAY);
}

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "c:\\TURBOC3\\BGI");
    {
        draw();
        getch();
    }
    return 0;
}