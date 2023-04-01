#include "tic_tac_toe.h"

int main() 
{
    TicTacToe game; //create an instance of the class

    auto prompt = 'Y';

    while (prompt == 'Y' || prompt == 'y')
    {
        //1) Prompt the user for first player
        string first_player;
        int position;
        while(true)
        {
            cout<<"Enter X or O: ";
            cin>>first_player;
            if(first_player == "X" || first_player == "O")
            {
                break;
            }
            else
            {
                cout<<"Invalid input. Please enter X or O.\n";
            }
        }
        //2) Start the game
        game.start_game(first_player);

            //3) Create a user controlled loop to play the game until user opts to quit.
            //4) In an inner loop while game is not over, prompt the user for a position 
            //(int type) and call the mark_board tic tac toe class member function. 
        while(game.game_over() == false)
        {   
            while(true)
            {
                cout<<"Enter position from 1 to 9: ";
                cin>>position;
                if(position >= 1 && position <=9)
                {
                    break;
                }
                else
                {
                    cout<<"Invalid input.  Please enter a number from 1 to 9. \n";
                }
            }
            game.mark_board(position);
            game.display_board(); 
        }
        cout<<"Game over\n"<<"The winner is "<<game.get_winner()<<".\n\n";

        while (true)
        {
            cout<<"Would you like to play another game? (Y/N) ";
            cin>>prompt;
        
            if (prompt == 'n' || prompt == 'N' || prompt == 'y' || prompt == 'Y')
            {
                break;
            }
            else{cout<<"Invalid input. Please enter a Y or N/\n";}
        }
    }
	return 0;
}