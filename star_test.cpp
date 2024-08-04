#include "canvas.h"
#include "star.h"
#include <iostream>

int main(int argc, char *argv[]) {
  Canvas canvas; // Create a default canvas
  Star *star;

  // create the star
  star = new Star(100, 100, 50);
  std::cout << "Star: " << star << std::endl;

  // add the star to the canvas and render it
  canvas.add(star);
  canvas.render_loop();

  // destroy the star
  delete star;

  return 0;
}
