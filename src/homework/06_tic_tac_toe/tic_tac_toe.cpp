//tic_tac_toe.cpp
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
bool TicTacToe::game_over()
{
    /*1) update class function to determine a win by checking for row win or column win or diagonal win. 
    (use conditional structure), 
    if winner call the set winner function and return true

check board full equal true indicates a tie 
If no winner by row, column, or diagonal set winner variable to C and return true.

return false-if no winner n board not full*/
    if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else{return false;}
}
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
string TicTacToe::get_winner()
{
    return winner;
}
bool TicTacToe::check_column_win()
{   
    for(int i = 0; i < 3; i++)
    {
        if(pegs[i] == "X" && pegs[i+3] == "X" && pegs[i+6] == "X")
        {
            return true;
        }
        else if(pegs[i] == "O" && pegs[i+3] == "O" && pegs[i+6] == "O")
        {
            return true;
        }
    }
    return false;
}
bool TicTacToe::check_row_win()
{   
    for(int i = 0; i < 9; i+=3)
    {
        if(pegs[i] == "X" && pegs[i+1] == "X" && pegs[i+2] == "X")
        {
            return true;
        }
        else if(pegs[i] == "O" && pegs[i+1] == "O" && pegs[i+2] == "O")
        {
            return true;
        }
    }
    return false;
}
bool TicTacToe::check_diagonal_win()
{   
    //X diagonal win conditions 
    if((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X"))
    {
        return true;
    }
    else if(pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X")
    {
        return true;
    }

    //O diagonal win conditions
    else if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;
    }
    else if(pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
    {
        return true;
    }
    
    else{return false;}
}
void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            out<<game.pegs[(i * 3) + j];
            if (j < 2){out<<"|";}
        }
        if(i < 2){out<<"\n";}
    }
    out<<"\n";
    return out;
}
std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;
    while(true)
    {
        cout<<"Enter position from 1 to 9: ";
        in>>position;
        if(position >= 1 && position <=9)
        {
            break;
        }
        else
        {
            cout<<"invalid input.  Please enter a number from 1 to 9. \n";
        }
    }
    game.mark_board(position);
    return in;
}
