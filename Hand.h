#ifndef ASSIGN2_Hand_H
#define ASSIGN2_Hand_H

#include "Node.h"
#include "LinkedList.h"
#include "TileBag.h"

class Hand : public LinkedList
{
public:
    Hand(TileBag *tileBag);
    ~Hand();

    static const int MAX_HAND_SIZE = 3;

private:
};

#endif // ASSIGN2_Hand_H