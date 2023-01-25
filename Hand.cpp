
#include "Hand.h"
#include <iostream>

Hand::Hand()
{
    head = nullptr;

    // TODO
}

Hand::~Hand()
{
}

void Hand::createInitialHand()
{
    int numOfTilesPerHand = 5;
    for (int i = 0; i <= numOfTilesPerHand; i++)
    {
        Tile *tile = new Tile();
        Node *node = new Node(tile, nullptr, nullptr);
        addElementToBackOfList(node);
    }
}

void Hand::addElementToBackOfList(Node *node)
{
    // If first element in the Hand, it's the head
    if (head == nullptr)
    {
        head = node;
    }
    else
    {
        // else, traverse to the last node
        Node *temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        // Change the next of last node to the new node
        temp->next = node;
    }
}

void Hand::printHand(Node *head)
{
    int i = 0;
    Node *trav = head;
    while (trav->next != nullptr)
    {
        std::cout << "Card: "
                  << i
                  << "| Colour: "
                  << trav->tile->getColour()
                  << "| Shape: "
                  << trav->tile->getShape()
                  << std::endl;
        trav = trav->next;
        i++;
    }
}

Node *Hand::getHeadOfList()
{
    return head;
}