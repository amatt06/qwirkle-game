#include "Player.h"
#include <iostream>

Player::Player(std::string name, TileBag *tileBag)
{
    std::cout << "Creating player " << name << std::endl;
    this->name = name;
    this->score = 0;
    this->tileBag = tileBag;
    this->hand = new Hand(tileBag);
}

std::string Player::getName()
{
    return this->name;
}

void Player::setName(std::string name)
{
    this->name = name;
}

void Player::setHand(Hand *hand)
{
    this->hand = hand;
}

Hand *Player::getHand()
{
    return this->hand;
}

int Player::getScore()
{
    return this->score;
}

void Player::setScore(int score)
{
    this->score = score;
}
void Player::increaseScore(int score)
{
    this->score += score;
}

// void Player::printHand(Hand *hand)
// {
//     std::cout << "Printing hand for " << this->name << std::endl;
//     Node *current = hand->getHead();
//     while (current != nullptr)
//     {
//         std::cout << current->tile->getColour() << " " << current->tile->getShape() << std::endl;
//         current = current->next;
//     }
// }
