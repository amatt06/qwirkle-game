
#ifndef ASSIGN2_NODE_H
#define ASSIGN2_NODE_H

#include "Tile.h"

class Node
{
public:
    Node(Tile *tile, Node *next);
    Node(Node &other);
    ~Node();

    Tile *tile;
    Node *next;
    Node *prev;

    void setTile(Tile *tile);
    Tile *getTile();
    Node *getNext();
    void setNext(Node *next);
};

#endif // ASSIGN2_NODE_H
