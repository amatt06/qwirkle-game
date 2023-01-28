
#include "Hand.h"
#include "Node.h"
#include "Tile.h"
#include <iostream>

Hand::Hand(TileBag *tileBag)
{
    std::cout << "Dealing hand..." << std::endl;
    Node *node = tileBag->getHead();
    for (int i = 0; i < HAND_SIZE; i++)
    {
        if (node != nullptr)
        {
            this->addTileToBack(node->tile);
            node = node->next;
        };
    }
}

Hand::~Hand()
{
}