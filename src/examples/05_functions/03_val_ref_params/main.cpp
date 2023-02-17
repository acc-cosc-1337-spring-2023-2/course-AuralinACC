#include<iostream>

using std::cout; using std::cin;

int main()
{
    auto num = 10;
    int &num_ref = num;//num_ref will store the address of num

    cout<<"Num is:"<<num<<"\n";
    cout<<"Stack address for num is: "<<&num<<"\n";

    cout<<"num value via num_ref: "<<num_ref<<"\n";
    cout<<"Address that num_ref points to: "<<&num_ref<<"\n\n";

    num_ref = 20; //?? will this change the value of num?
    cout<<"Num is:"<<num<<"\n";
    cout<<"Stack address for num is: "<<&num<<"\n";

    return 0;
}