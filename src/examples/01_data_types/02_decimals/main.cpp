#include "decimals.h" //tell C++ where to find add to double 1 function

#include<iostream>//we want to use cout

using std::cout;//explicitly tells c++ that we are only using cout from iostream

int main()
{
    double num = 0;
    double num1 = add_to_double_1(num);

    //we do something
    num1 = num1 + 1

    cout<<"Adding to a double: "<<num1<<"\n";

    return 0;
}