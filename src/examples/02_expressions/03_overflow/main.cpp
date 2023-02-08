#include<iostream>

using std::cout;

int main()
{
    auto num = 5; //int as a whole number
    auto num1 = 5.5;// double decimal number

    cout<<"Size of num: "<<sizeof(num)<<"bytes"<<"\n";
    cout<<"Size of num1: "<<sizeof(num1)<<"\n";

    num = 2147483647; //2^31 -1 ; max int value
    cout<<"max value for int; "<<num<<"\n";

    num += 1; // same as num = num + 1; // same as num++;
    cout<<"value for num int: "<<num<<"\n";

    return 0;
}