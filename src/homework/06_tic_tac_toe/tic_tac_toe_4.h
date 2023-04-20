//tic_tac_toe_4.h
#include "tic_tac_toe.h"

class TicTacToe4 : public TicTacToe
{
public:
    //Default constructor
    TicTacToe4() : TicTacToe(4){}
    //in .h file add a new constructor TicTacToe4(std::vector<string> p, string winner) 
    //more code here Don’t forget to pass p and winner to TicTacToe via constructor
    TicTacToe4(vector<string> p, string winner) 
     : TicTacToe(p, winner) {}

private:
    //Create private functions  check_column_win, check_row_win, and check_diagonal_win   
    //with no parameters that return a bool.
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};