
#include "Tile.h"
#include <iostream>

Tile::Tile(Colour colour, Shape shape)
{
    setColour(colour);
    setShape(shape);
}

Tile::Tile()
{
    this->setColour(generateRandomisedColour());
    this->setShape(generateRandomisedShape());
}

Colour Tile::generateRandomisedColour()
{
    Colour colours[6] = {RED, ORANGE, YELLOW, GREEN, BLUE, PURPLE};
    int randomIndex = rand() % 6;

    return colours[randomIndex];
}

Shape Tile::generateRandomisedShape()
{
    Shape shapes[6] = {CIRCLE, STAR_4, DIAMOND, SQUARE, STAR_6, CLOVER};
    int randomIndex = rand() % 6;

    return shapes[randomIndex];
}

int Tile::getColour()
{
    // return RED;
    return colour;
}

void Tile::setColour(int colour)
{
    // this->colour = RED;
    this->colour = colour;
}

int Tile::getShape()
{
    // return DIAMOND;
    return shape;
}

void Tile::setShape(int shape)
{
    // this->shape = DIAMOND;
    this->shape = shape;
}