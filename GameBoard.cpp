
#include "GameBoard.h"
#include <vector>
#include <string>

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

std::string GameBoard::getState()
{
    std::string state;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j].getColour() != ' ')
            {
                state += board[i][j].getColour();
                state += std::to_string(board[i][j].getShape());
                state += "@(";
                state += std::to_string(i);
                state += ",";
                state += std::to_string(j);
                state += ") ";
            }
        }
    }
    return state;
}
