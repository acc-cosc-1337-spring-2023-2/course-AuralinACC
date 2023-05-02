#include "recursion.h"
#include<iostream>

using std::cout;

void recursive_hello() // will crash
{
    cout<<"hello\n";
    recursive_hello();
}
void iterative_hello() // won't crash
{
    while(true)
    {
        cout<<"hello\n";
    }
}

//Write code for recursive display function


//Write code for recursive factorial
