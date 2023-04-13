//tic_tac_toe_3.h
#include "tic_tac_toe.h"

class TicTacToe3 : public TicTacToe
{
public:
    //Default constructor
    TicTacToe3() : TicTacToe(3){}

private:
    //Create private functions  check_column_win, check_row_win, and check_diagonal_win   
    //with no parameters that return a bool.
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    
};