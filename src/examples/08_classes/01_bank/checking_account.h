//checking_account.h
#include<stdlib.h>//for rand() function

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount
{
friend void show_balance(CheckingAccount account);
friend std::ostream& operator<<(std::ostream& cout, const CheckingAccount &account);

public:
    CheckingAccount(){get_balance_from_db();} //constructor
    CheckingAccount(int b) : balance(b){/*empty function code block*/} // constructor
    int get_balance() const {return balance;} //return function
    void deposit(int amount); //void function
    void withdraw(int amount);
private:
    int balance{0};//explicitly initialize to zero
    void get_balance_from_db();
};

#endif