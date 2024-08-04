////////////////////////////////////////////////////////////////////////
///// Author : Puli Semo Id : S02060906/////////////////////////////////
///////////////////////////////////////////////////////////////////////
#include "canvas.h"
#include "square.h"
#include <iostream>

int main(int argc, char *argv[]) {
  Canvas canvas; // Create a default canvas
  Square *square;

  // create the square
  square = new Square(20,20,100);
  std::cout << "Square: " << square << std::endl;

  // add the square to the canvas and render it
  canvas.add(square);
  canvas.render_loop();

  // destroy the square
  delete square;

  return 0;
}
