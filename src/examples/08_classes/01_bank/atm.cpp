//atm.cpp
#include "atm.h"
#include "checking_account.h"

using std::cin; using std::cout;

void display_menu()
{
    cout<<"\\nAcc COSC Bank\n\n";
    cout<<"1-Deposit\n";
    cout<<"2-withdraw\n";
    cout<<"3-Balance\n";
}
void run_menu(CheckingAccount &account)
{
    auto option = 0;

    do
    {
        display_menu();
        cout<<"Enter menu option: ";
        cin>>option;
        handle_menu_option(option, account);

    } while (option != 4);
    
}
void handle_menu_option(int option, CheckingAccount &account)
{
    auto amount = 0;
    
    switch(option)
    {
     case 1:
        cout<<"enter depoist amount";
        account.deposit(amount);
        break;
     case 2:
        cout<<"Enter withdrawl amount";
        account.withdraw(amount);
        break;
     case 3:
        cout<<"Balance: ";
        cout<<account.get_balance()<<"\n";
        break;
     case 4:
        cout<<"Exiting ...\n";
        break;
     default:
        cout<<"Invalid option ...";
        break;
        }
}