#ifndef ASSIGN2_PLAYER_H
#define ASSIGN2_PLAYER_H

#include "Tiles.h"
#include "TileBag.h"
#include "Hand.h"
#include <string>

class Player
{
private:
    std::string name;
    TileBag *tileBag;
    // The player's tiles
    Hand *hand;
    // The player's individual score
    int score;

public:
    Player();
    Player(std::string name, TileBag *tileBag);

    void setName(std::string name);
    std::string getName();
    void setHand(Hand *hand);
    Hand *getHand();
    int getScore();
    void setScore(int score);
    void increaseScore(int score);
    void printHand();
};

#endif // ASSIGN2_PLAYER_H