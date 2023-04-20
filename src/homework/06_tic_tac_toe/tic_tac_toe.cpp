//tic_tac_toe.cpp
#include "tic_tac_toe.h"

 TicTacToe::TicTacToe(int size) : pegs(size*size, " "){}
 TicTacToe::TicTacToe(vector<string> p, string win)
  : pegs(p), winner(win){}

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
    for (int i = 0; i < pegs.size(); i++)
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
    return false;
}
bool TicTacToe::check_row_win()
{   
    return false;
}
bool TicTacToe::check_diagonal_win()
{   
    return false;
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

vector<string> TicTacToe::get_pegs() const{return pegs;}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    int row_size = sqrt(game.pegs.size());
    int size = static_cast<int>(game.pegs.size());
    for (int i = 0; i < size; i++)
    {
        out << game.pegs[i];
        if ((i + 1) % row_size == 0) 
        {
            out << "\n";
        } else {
            out << "|";
        }
    }
    out<<"\n";
    return out;
}
std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;
    int max_position = game.pegs.size();
    while(true)
    {
        cout<<"Enter position from 1 to "<<max_position<<": ";
        in>>position;
        if(position >= 1 && position <= max_position)
        {
            break;
        }
        else
        {
            cout<<"invalid input.  Please enter a number from 1 to "<<max_position<<". \n";
        }
    }
    game.mark_board(position);
    return in;
}