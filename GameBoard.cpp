
#include "GameBoard.h"

GameBoard::GameBoard()
{
    // TODO
}

GameBoard::GameBoard(vector<vector<Tile>> board)
{
    // TODO
}

int GameBoard::getHeight()
{
    return board.size();
}

int GameBoard::getWidth()
{
    if (board.size() > 0)
    {
        return board[0].size();
    }
    else
    {
        return 0;
    }
}