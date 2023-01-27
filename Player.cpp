#include "Player.h"

Player::Player()
{
    name = "";
    score = 0;
    playerHand = new LinkedList();
}

// Cosntructor to assign name at creation.
Player::Player(std::string name)
{
    this->name = name;
    score = 0;
    playerHand = new LinkedList();
}

void Player::increaseScore(int score)
{
    this->score += score;
}

std::string Player::getName()
{
    return name;
}

int Player::getScore()
{
    return score;
}

std::string Player::getHand()
{
}
