
#ifndef ASSIGN2_NODE_H
#define ASSIGN2_NODE_H

#include "Tile.h"

class Node
{
public:
    Node(Tile *tile, Node *next, Node *prev);
    Node(Node &other);
    Node();
    ~Node();

    Tile *tile;
    Node *next;
    Node *prev;

    Tile *getTile();
    void setTile(Tile *tile);
    Node *getNext();
    void setNext(Node *next);
    Node *getPrev();
    void setPrev(Node *prev);
};

#endif // ASSIGN2_NODE_H
