
#ifndef ASSIGN2_TILE_H
#define ASSIGN2_TILE_H

#include "TileCodes.h"

// Define a Colour type
typedef char Colour;

// Define a Shape type
typedef int Shape;

class Tile
{
public:
    Colour colour;
    Shape shape;

    Tile(Colour colour, Shape shape);
    Tile();

    Colour generateRandomisedColour();
    Shape generateRandomisedShape();
    int getColour();
    void setColour(int colour);
    int getShape();
    void setShape(int shape);
};

#endif // ASSIGN2_TILE_H