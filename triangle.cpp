#include "triangle.h"
#include "canvas.h"

Triangle::Triangle(int _x, int _y, int _length)
    : _x(_x), _y(_y), _length(_length) {}

void Triangle::draw(Canvas *canvas) {
  // Compute the coordinates of the other two vertices
  int halfSide = _length / 2;
  int x1 = _x - halfSide;
  int y1 = _y + halfSide;
  int x2 = _x + halfSide;
  int y2 = _y + halfSide;

  // Draw the three lines
  canvas->line(_x, _y, x1, y1);
  canvas->line(_x, _y, x2, y2);
  canvas->line(x1, y1, x2, y2);
}
