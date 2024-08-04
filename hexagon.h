// File: hexagon.h
// Purpose: Class definition for a hexagon

#ifndef HEXAGON_H
#define HEXAGON_H

#include "drawable.h"

class Hexagon : public Drawable {
public:
    // Constructor
    Hexagon(int _x, int _y, int _length);

    // Draw the hexagon
    virtual void draw(Canvas *canvas);

private:
    int _x;
    int _y;
    int _length;
};

#endif
