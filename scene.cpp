////////////////////////////////////////////////////////////////////////
///// Author : Puli Semo Id : S02060906/////////////////////////////////
///////////////////////////////////////////////////////////////////////
// File: scene.cpp
//  Purpose : Draw a scene of shapes

#include "canvas.h"
#include "hexagon.h"
#include "hourglass.h"
#include "square.h"
#include "star.h"
#include "triangle.h"

int main() {
  Canvas canvas;
  Square *square;
  Hexagon *hexagon;
  Hourglass *hourglass;
  Triangle *triangle;
  Star *star;

  // create the square
  square = new Square(20, 20, 100);
  // create the star
  star = new Star(580, 80, 50);
  // create the triangle
  triangle = new Triangle(320, 50, 100);

  // create the hexagon
  hexagon = new Hexagon(420, 50, 50);
  // create the hourglass
  hourglass = new Hourglass(170, 20, 100, 100);
  // add the shapes to the canvas and render it
  canvas.add(square);
  canvas.add(triangle);
  canvas.add(star);
  canvas.add(hexagon);
  canvas.add(hourglass);

  canvas.render_loop();
}
