
#include "Node.h"
#include "Tile.h"

Node::Node(Tile *tile, Node *next)
{
    this->tile = new Tile(tile->getColour(), tile->getShape());
    this->next = next;
}

Node::~Node()
{
    delete tile;
}

// Copy Constructor (Deep Copy).
Node::Node(Node &other)
{
    this->tile = new Tile(*(other.tile));
    this->next = other.next;
}

Tile *Node::getTile()
{
    return tile;
}

void Node::setTile(Tile *tile)
{
    this->tile = tile;
}

Node *Node::getNext()
{
    return next;
}

void Node::setNext(Node *next)
{
    this->next = next;
}
