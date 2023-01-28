#ifndef ASSIGN2_GAMESTATE_H
#define ASSIGN2_GAMESTATE_H

#include "Player.h"
#include "GameBoard.h"
#include <string>
#include "Tiles.h"

class GameState
{
public:
    // Constructor
    GameState(Player player1, Player player2, GameBoard board, Tiles tiles, Player currentPlayer);

    Player getPlayer(int i); 

    // Save the game state to a file
    void save(std::string filename);

    // Load the game state from a file
    void load(std::string filename);

private:
    Player player1;
    Player player2;
    GameBoard gameBoard;
    Tiles tiles;
    Player currentPlayer;
};

#endif // ASSIGN2_GAMESTATE_H