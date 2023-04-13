//tic_tac_toe_4.h
#include "tic_tac_toe.h"

class TicTacToe4 : public TicTacToe
{
public:
    //Default constructor
    TicTacToe4() : TicTacToe(4){}

private:
    //Create private functions  check_column_win, check_row_win, and check_diagonal_win   
    //with no parameters that return a bool.
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};