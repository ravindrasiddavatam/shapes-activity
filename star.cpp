// File: star.cpp
// Purpose: Implementation of the star class

#include "star.h"
#include "canvas.h"
#include <cmath>

// Constructor
Star::Star(int _x, int _y, int _l) {
  this->_x = _x;
  this->_y = _y;
  this->_l = _l;
}

// Function to draw a six-sided star
void Star::draw(Canvas* canvas) {
  // Constants
  const double PI = 3.141592653589793;
  const double angle = PI / 3; // 60 degrees for a six-sided star

  // Coordinates of the star points
  int points[12];
  for (int i = 0; i < 6; ++i) {
    points[2*i] = _x + _l * cos(angle * i);
    points[2*i + 1] = _y + _l * sin(angle * i);
  }

  // Draw the star by connecting the points
  for (int i = 0; i < 6; ++i) {
    int nextIndex = (i + 2) % 6;
    canvas->line(points[2*i], points[2*i + 1], points[2*nextIndex], points[2*nextIndex + 1]);
  }
}
