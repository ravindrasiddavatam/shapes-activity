////////////////////////////////////////////////////////////////////////
///// Author : Puli Semo Id : S02060906/////////////////////////////////
///////////////////////////////////////////////////////////////////////
// File: hexagon_test.cpp
// Purpose: Test file for the Hexagon class

#include "hexagon.h"
#include "canvas.h"

int main() {
    Canvas canvas; // Create a default canvas
    Hexagon hexagon(50, 50, 50); // Create a hexagon object

    // Add the hexagon to the canvas and render it
    canvas.add(&hexagon);
    canvas.render_loop();

    return 0;
}
