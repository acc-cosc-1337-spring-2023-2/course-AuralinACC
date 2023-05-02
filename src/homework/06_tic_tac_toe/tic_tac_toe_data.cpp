//tic_tac_toe_data.cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <fstream>

using std::ofstream; using std::ifstream; 
using std::getline; using std::make_unique;

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

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    //Algorithm to restore a vector of unique ptr of TicTacToe from file.
    //(Each line in the file is a game(vector of string), 
    //each character in the line are the pegs of the game from left to right position 0,1, etc.). 
    //The last character in each line is the game winner.
    vector<unique_ptr<TicTacToe>> games;
    string line;
    ifstream readFile;
    readFile.open("saved_games.dat");
    
    if(readFile.is_open())
    {
        while (getline(readFile, line)) 
        {
            vector<string> pegs;
            for(size_t i = 0; i < line.size() - 1; i++)
            {
                pegs.emplace_back(string(1, line[i]));
            }
            string winner(1, line.back());

            if (pegs.size() == 9)
            {
                games.push_back(make_unique<TicTacToe3>(pegs, winner));
            }
            else if (pegs.size() == 16)
            {
                games.push_back(make_unique<TicTacToe4>(pegs, winner));
            }
        }
    readFile.close();
    }
    else
    {
        cout<<"Unable to open the file\n";
    }
    return games;
}
