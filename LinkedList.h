
#ifndef ASSIGN2_LINKEDLIST_H
#define ASSIGN2_LINKEDLIST_H

#include "Node.h"
#include "Tile.h"

class LinkedList
{
public:
    // Constructor/Destructor
    LinkedList();
    ~LinkedList();

    Tile *getTileAtIndex(int index);

    // Method to implement destructor.
    void clearList();

    // Accessors
    Node *getHead();
    Node *getTail();
    int getSize();

    // Mutators
    void setHead(Node *head);
    void setTail(Node *tail);
    void setSize(int size);

    // Functions to add/remove TileBag.

    // Add a tile to the list.
    void addTileToBack(Tile *tile);

    // Remove a tile from player hand and replace it with a new tile.
    void replaceTile(Tile *tileToReplace, LinkedList *tileBag);

    // Remove a number of nodes from the front of the list.
    void removeTilesFromFront(int numToRemove);

    // Get the front tile from the list.
    Tile *drawTile();

    // Remove a tile from player hand.
    void removeItemFromList(Node *nodeToDelete);

    bool isTileInList(Tile *tile);

    Node *getNode(Tile tile);

    int countOfNodes(Node *head);

private:
    Node *head;
    Node *tail;
    int size;
};

#endif // ASSIGN2_LINKEDLIST_H