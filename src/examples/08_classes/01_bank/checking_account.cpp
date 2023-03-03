//checking_account.cpp
#include "checking_account.h"
#include<iostream>

void CheckingAccount::get_balance_from_db()
{
    balance = rand() %10000 + 1;//value between 1 and 10000
}

void CheckingAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}

void CheckingAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}

//FREE FUNCTIONS; NOT PART OF THE CLASS!!!
void show_balance(CheckingAccount &account)
{
    
    std::cout<<"Friend balance: "<<account.balance<<"\n";
}

friend std::ostream& operator<<(std::ostream& cout, const CheckingAccount &account)
{
    out<<"Overload balance: "<<account.balance<<"\n";

    return out;
}