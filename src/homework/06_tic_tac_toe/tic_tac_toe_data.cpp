//tic_tac_toe_data.cpp
#include "tic_tac_toe_data.h"

void TicTacToeData::save_games(const vector<unique_ptr<TicTacToe>>& games)
{
//Algorithm:
    //Open file for writing For each vector of TicTacToe
    ofstream saveFile;
    saveFile.open("saved_games.dat");
    
    
    for(const auto& game : games)
    {
        vector<string> pegs = game->get_pegs();
        //For each char in string 
        for (const string& s : pegs)
        {
            //Write char to file
            saveFile << s;
        }
        //end char in string loop
  
        //Write get winner of game to file
        saveFile<<game->get_winner();
        //Write a new line
        saveFile<<"\n";
    }
    //end vector of TicTacToe loop 
    saveFile.close();
}

vector<unique_ptr<TicTacToe>>& get_games();
    //Algorithm to restore a vector of unique ptr of TicTacToe from file.
    //(Each line in the file is a game(vector of string), 
    //each character in the line is the , and from left to right position 0,1, etc.). 
    //The last character in each line is the game winner.