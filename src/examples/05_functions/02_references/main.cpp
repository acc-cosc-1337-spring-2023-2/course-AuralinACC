#include<iostream>

using std::cout; using std::cin;

int main()
{
    auto num = 10;
    int &num_ref = num; //num_ref will store the address of num

    cout<<"Num is: "<<num<<"\n";
    cout<<"Stack address for num is: "<<&num<<"\n\n";

    cout<<"Num value via num_ref: "<<num_ref<<"\n";
    cout<<"Address that num_ref points to: "<<&num_ref<<"\n\n";

    num_ref = 20; //?? will this change the value of num?
    cout<<"Num is: "<<num<<"\n"; //prints 20, the value of num changed 
    cout<<"Num value via num_ref: "<<num_ref<<"\n"; //prints 20, num_ref is referencings the changed num value

    return 0;
}