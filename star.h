// File: star.h
// Purpose: Class definition for a star

#ifndef STAR_H
#define STAR_H
#include "drawable.h"

class Star : public Drawable {
public:
  // Constructor
  Star(int _x, int _y, int _l);

  // Draw the star
  virtual void draw(Canvas *canvas);

private:
  int _x;
  int _y;
  int _l;
};

#endif
