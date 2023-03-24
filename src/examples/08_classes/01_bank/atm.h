//atm.h
#include<iostream>
#include<vector>
#include<memory>
#include "bank_account.h"

void display_menu();
void run_menu(std::vector<std::unique_ptr<BankAccount>> &accounts);
void handle_menu_option(int option, std::unique_ptr<BankAccount> &account);