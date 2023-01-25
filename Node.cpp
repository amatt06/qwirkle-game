
#include "Node.h"
#include "Tile.h"
#include <iostream>

Node::Node(Tile *tile, Node *prev, Node *next)
{
    // TODO
    this->tile = tile;
    this->prev = prev;
    this->next = next;
}
Node::Node(Node &other)
{
    // TODO
}

Node::Node()
{
    // TODO
}

Node::~Node()
{
    // TODO
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
Node *Node::getPrev()
{
    return prev;
}

void Node::setPrev(Node *prev)
{
    this->prev = prev;
}