#include "tic_tac_toe.h"

int main() 
{
    TicTacToe game; //create an instance of the class
    
    //1) Prompt the user for first player
    string first_player;
    while(first_player != "X" && first_player != "O")
    {
        cout<<"Enter X or O: ";
        cin>>first_player;
    }
    
    //2) Start the game
    game.start_game(first_player);

    //3) Create a user controlled loop to play the game until user opts to quit.
    while(game.game_over() == false)
    {
        cout<<"Enter position from 1 to 9: ";
    }
    

	return 0;
}

/*
	while(first_player != "X" && first_player != "O")
        {
            cout<<"Enter X or O: ";
            cin>>first_player;
        }
*/