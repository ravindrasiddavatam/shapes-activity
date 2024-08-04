////////////////////////////////////////////////////////////////////////
///// Author : Puli Semo Id : S02060906/////////////////////////////////
///////////////////////////////////////////////////////////////////////
// File: square.h
// Purpose: Class definition for a square

#ifndef SQUARE_H
#define SQUARE_H
#include "drawable.h"

class Square : public Drawable {
public:
  // Constructor
  Square(int _x, int _y, int _l);

  // Draw the sqaure
  virtual void draw(Canvas *canvas);

private:
  int _x;
  int _y;
  int _l;
};

#endif
