////////////////////////////////////////////////////////////////////////
///// Author : Puli Semo Id : S02060906/////////////////////////////////
///////////////////////////////////////////////////////////////////////

// File:square.cpp
//Purpose: Implementation of the square class

#include "square.h"
#include "canvas.h"
//Constructor
Square::Square(int _x, int _y, int _l){
  this->_x = _x;
  this->_y = _y;
  this->_l = _l;
}
  
//Draw the square
void Square::draw(Canvas* canvas)
{
  //compute the other extremes
  int rx= _x + _l;
  int ly= _y + _l;

  // draw the four lines
  canvas->line(_x, _y, rx, _y); //top line
  canvas->line(_x, ly, rx, ly); //bottom line
  canvas->line(_x, _y, _x, ly); //left line
  canvas->line(rx, _y, rx, ly); //right line
  
}

