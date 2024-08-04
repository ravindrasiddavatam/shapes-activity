// File: hexagon.cpp
// Purpose: Implementation of the hexagon class

#include "hexagon.h"
#include "canvas.h"
#include <cmath>

// Constructor
Hexagon::Hexagon(int _x, int _y, int _length) : _x(_x), _y(_y), _length(_length) {}

// Draw the hexagon
void Hexagon::draw(Canvas* canvas)
{
    // Calculate the coordinates of the six vertices of the hexagon
    int x1 = _x;
    int y1 = _y;
    int x2 = _x + _length;
    int y2 = _y;
    int x3 = _x + 3 * (_length / 2);
    int y3 = _y + (_length * sqrt(3)) / 2;
    int x4 = _x + _length;
    int y4 = _y + 2 * (_length * sqrt(3)) / 2;
    int x5 = _x;
    int y5 = _y + 2 * (_length * sqrt(3)) / 2;
    int x6 = _x - (_length / 2);
    int y6 = _y + (_length * sqrt(3)) / 2;

    // Draw the lines connecting the vertices to form the hexagon
    canvas->line(x1, y1, x2, y2);
    canvas->line(x2, y2, x3, y3);
    canvas->line(x3, y3, x4, y4);
    canvas->line(x4, y4, x5, y5);
    canvas->line(x5, y5, x6, y6);
    canvas->line(x6, y6, x1, y1);
}
