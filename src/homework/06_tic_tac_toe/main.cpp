#include "tic_tac_toe.h"

int main() 
{
    TicTacToe game; //create an instance of the class

    auto prompt = 'i';

    do
    {
        //1) Prompt the user for first player
        string first_player;
        int position;
        while(first_player != "X" && first_player != "O")
        {
            cout<<"Enter X or O: ";
            cin>>first_player;
        }
        
        //2) Start the game
        game.start_game(first_player);

        //3) Create a user controlled loop to play the game until user opts to quit.
        //4) In an inner loop while game is not over, prompt the user for a position 
        //(int type) and call the mark_board tic tac toe class member function. 
        while(game.game_over() == false)
        {
            cout<<"Enter position from 1 to 9: ";
            cin>>position;
            game.mark_board(position);
            game.display_board();
        }
        cout<<"Game over\n\n";

        cout<<"Would you like to play another game? (Y/N) ";
        cin>>prompt;
    } 
    while (prompt != 'n' && prompt != 'N');

	return 0;
}