//tic_tac_toe_data.h
#include "tic_tac_toe.h"
#include <memory>
#include <fstream>

using std::unique_ptr; using std::ofstream;

#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

class TicTacToeData
{
public:
    //Add class function  void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games) 
    void save_games(const vector<unique_ptr<TicTacToe>>& games);
    // Add  std::vector<std::unique_ptr<TicTacToe>> get_games() function.
    vector<unique_ptr<TicTacToe>>& get_games();
};

#endif