//tic_tac_toe.h
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <memory>

using std::cout; using std::cin;
using std::string; using std::vector;
using std::istream; using std::ostream;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
    //Free functions 
//Overloading the output stream operator
friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
//Overloading the input stream operator
friend std::istream& operator>>(std::istream& in, TicTacToe& game);

protected:
    //Make class variable pegs a protected variable, and change it to std::vector<std::string> pegs;
    vector<string> pegs;
    //Make functions check_column_win, check_row_win, and check_diagonal_win protected virtual functions.
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

private:
    //class private data
    string player;

    //function/data members
    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner();
    string winner;

public:
    /*Create a constructor with an int parameter named size.
     a. in the constructor use an initializer list to initialize the vector to 9 or 16 elements
        HINT(multiply 3 or 4 by itself)
        Example: SomeConstructor(int s) :some_vector(s*s, " " ){}
        //this will initialize some_vector to s*s elements of " "*/
    TicTacToe(int size);

    //function/data members
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    string get_winner();
};

#endif