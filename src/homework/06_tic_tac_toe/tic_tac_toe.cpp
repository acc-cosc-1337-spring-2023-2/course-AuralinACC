//cpp
#include "tic_tac_toe.h"

void TicTacToe::set_next_player()
{
    /*
    Set player. If private variable player X player is O else player is X. (player is a private variable)
    */
    if (player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}
bool TicTacToe::check_board_full()
{
    /*
    1) return false if vector of strings pegs has available slot by checking 
    for a “ “(space)in each element. Otherwise return true
    */
    for (int i = 0; i < 9; i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}