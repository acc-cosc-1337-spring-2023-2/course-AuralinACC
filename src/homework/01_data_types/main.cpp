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
	int num1 = 4;

	cout<<"Enter value for num: ";
	std::cin>>num;

	int result = multiply_numbers(num);
	cout<<"Result of 5 * "<<num<< " is: "<<result<<"\n";
	
	result = multiply_numbers(num1);
	cout<<"Result of 5 * "<<num1<<" is: "<<result<<"\n";

	return 0;
}
