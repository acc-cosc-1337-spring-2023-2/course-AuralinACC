//h
#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::cin;
using std::string; using std::vector;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
private:
    //class private data
    string player;
    vector<string> pegs{9, " "};

    //function/data members
    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    string winner;

public:
    //function/data members
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;
    string get_winner();
};

#endif