//main.cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::make_unique;

int main() 
{
    TicTacToeData data;
    TicTacToeManager manager(data);
    unique_ptr<TicTacToe> game;
    int o, x, t;
    auto prompt = 'Y';
    int size;

    do
    {
        //promt the user to play TicTacToe 3 or 4
        while(true)
        {
            cout<<"Choose game size (3 or 4): ";
            cin>>size;

            if (size == 3 || size == 4)
            {
                break;
            }
            else
            {
                cout<<"Invalid input. Please enter 3 or 4.\n";
            }
        }
        //create an instance (make_unique) of TicTacToe3 or 4
        if(size == 3)
        {
            game = make_unique<TicTacToe3>();
        }
        else
        {
            game = make_unique<TicTacToe4>();
        }

        //1) Prompt the user for first player
        string first_player;
        while(true)
        {
            cout<<"Enter X or O: ";
            cin>>first_player;
            if(first_player == "x")
            {
                first_player = "X";
            }
            if(first_player == "o")
            {
                first_player = "O";
            }
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
        
        game->start_game(first_player);

            //3) Create a user controlled loop to play the game until user opts to quit.
            
        while(!game->game_over())
        {   
            //4) In an inner loop while game is not over, prompt the user for a position 
            //(int type) and call the mark_board tic tac toe class member function. 
            cin >> *game;
            cout<< *game;
        }
        cout<<"Game over\n"<<"The winner is "<<game->get_winner()<<".\n\n";

        manager.save_game(game); //save game to game manager instance
        manager.get_winner_total(o, x, t);//initialize win values to o, x, t by calling member

        //print score
        cout<<"O wins: "<<o<<"\n";
        cout<<"X wins: "<<x<<"\n";
        cout<<"Ties: "<<t<<"\n\n";

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
    while (prompt == 'Y' || prompt == 'y');
    cout<<"\n"<<manager<<"\n";
    manager.get_winner_total(o, x, t);

    //print score
    cout<<"O wins: "<<o<<"\n";
    cout<<"X wins: "<<x<<"\n";
    cout<<"Ties: "<<t<<"\n\n";
    
	return 0;
}