//cpp
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"

void TicTacToeManager::update_winner_count(string winner)
{
    //if winner X increment x_win, if winner O increment o_win, and else increment ties 
    if(winner == "X")
    {
        x_win++;
    }
    else if(winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}
void TicTacToeManager::save_game(TicTacToe b)
{
    //add the TicTacToe to games vector with push_back, 
    //call update winner count pass the winner from TicTacToe to update x, o, or tie totals.
    games.push_back(b);
    update_winner_count(b.get_winner());
}
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    //Overload <<-Loop through vector of TicTacToe and call the TicTacToe cout overload.
    for ( const auto& game : manager.games)
    {
        out << game << "\n";
    }
    return out;
}
void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    //Use references to get the winners
    o = o_win;
    x = x_win;
    t = ties;
}