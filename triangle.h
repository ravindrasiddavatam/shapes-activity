#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "drawable.h"

class Triangle : public Drawable {
public:
  // Constructor
  Triangle(int _x, int _y, int _length);

  // Draw the triangle
  virtual void draw(Canvas *canvas) override;

private:
  int _x;
  int _y;
  int _length;
};

#endif // TRIANGLE_H
