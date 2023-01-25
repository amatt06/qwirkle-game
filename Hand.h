
#ifndef ASSIGN2_Hand_H
#define ASSIGN2_Hand_H

#include "Node.h"

class Hand
{
public:
    Hand();
    ~Hand();

    Node *getHeadOfList();
    void createInitialHand();
    void addElementToBackOfList(Node *node);
    void printHand(Node *head);

private:
    Node *head;
    // int length;
};

#endif // ASSIGN2_Hand_H
