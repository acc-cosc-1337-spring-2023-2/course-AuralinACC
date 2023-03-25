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
void TicTacToe::clear_board()
{
    //1) Set all 9 elements to a “ “ (space)
    for (int i = 0; i < 9; i++) { pegs[i] = " "; }
}
bool TicTacToe::game_over(){return check_board_full();}
void TicTacToe::start_game(string first_player)
{
    /*
    1) First_player function argument value must be X or O
    2) In function set player(private variable) to first_player function argument. 
    3) Call the clear_board function
    */
        
    if (first_player == "X" || first_player == "O")
    {
        player = first_player;
    }
      
    clear_board();
    }
void TicTacToe::mark_board(int position)
{
    /*
    1) Mark vector w position -1 equal to player(private variable)
    2) Call set_next_player private function
    */
    pegs[position - 1] = player;
    set_next_player();
}
string TicTacToe::get_player() const {return player;} /*return the player(private variable) value*/
void TicTacToe::display_board() const 
{
    /*
    Iterate vector of strings pegs to 
    Display a tic tac toe board in 3x 3 format
    */;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<pegs[(i * 3) + j];
            if (j < 2){cout<<"|";}
        }
        if(i < 2){cout<<"\n";}
    }
    cout<<"\n";
}