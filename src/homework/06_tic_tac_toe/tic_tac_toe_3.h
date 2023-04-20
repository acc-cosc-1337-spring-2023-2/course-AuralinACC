//tic_tac_toe_3.h
#include "tic_tac_toe.h"

class TicTacToe3 : public TicTacToe
{
public:
    //Default constructor
    TicTacToe3() : TicTacToe(3){}
    //in .h file add a new constructor TicTacToe3(std::vector<string> p, string winner)
    //more code here Don’t forget to pass p and winner to TicTacToe via constructor
    TicTacToe3(vector<string> p, string winner) 
     : TicTacToe(p, winner) {} //using new constructor made in tic_tac_toe.h

private:
    //Create private functions  check_column_win, check_row_win, and check_diagonal_win   
    //with no parameters that return a bool.
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    
};