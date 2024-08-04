#include "canvas.h"
#include "triangle.h"
#include <iostream>

int main() {
  Canvas canvas;
  Triangle *triangle;

  // Create the triangle
  triangle = new Triangle(50, 50, 100);

  // Add the triangle to the canvas and render it
  canvas.add(triangle);
  canvas.render_loop();

  // Destroy the triangle
  delete triangle;

  return 0;
}
