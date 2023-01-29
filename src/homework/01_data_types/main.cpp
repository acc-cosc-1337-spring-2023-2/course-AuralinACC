//write include statements
#include<data_types.h>
#include<iostream>

//write namespace using statement for cout
using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num = 0;
	std::cin>>num;

	int result = multiply_numbers(num);
	cout<<"Result is: "<<result<<"\n";

	//int num1 = 4;
	//int result = multiply_numbers(num1);
	//cout<<"Result is: "<<result<<"\n";

	return 0;
}
