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
    void clear_board()
    {
        //1) Set all 9 elements to a “ “ (space)
        for (int i = 0; i < 9; i++) { pegs[i] = " "; }
    }

public:
    //function/data members
    bool game_over(){return check_board_full();}
    void start_game(string first_player)
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
    void mark_board(int position)
    {
        /*
        1) Mark vector w position -1 equal to player(private variable)
        2) Call set_next_player private function
        */
        pegs[position - 1] = player;
        set_next_player();
    }
    string get_player() const {return player;} /*return the player(private variable) value*/
    void display_board() const 
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
};

#endif