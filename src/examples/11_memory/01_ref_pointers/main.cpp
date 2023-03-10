#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	auto num = 5, num1 = 10;
	int &num_ref = num;//num_ref reference the addres of num
	int & num_ref1 = num;

	cout<<"num addres is: "<<&num<<"\n";
	cout<<"Address that num_ref references: "<<&num_ref<<"\n";
	cout<<"Value of num: "<<num<<"\n";
	cout<<"Value that num_ref references: "<<num_ref<<"\n";

	num_ref = num1; //num_ref value of 5 was changed to 10
	cout<<"Value that num_ref references: "<<num_ref<<"\n";
	cout<<"Address that num_ref references: "<<&num_ref<<"\n";

	//pointer
	//auto num = 5;
	int *num_ptr = &num;//point to the memory of num
	
	cout<<"Num addres is: "<<&num<<"\n";
	cout<<"Addres that num_ptr points to: "<<num_ptr<<"\n";
	cout<<"Value that num_ptr points to: "<<*num_ptr<<"\n";//* means dereference the address
	
	*num_ptr = 10;//works with the value that pointers points to
	cout<<"\nNum value: "<<num<<"\n";
	cout<<"Value that num_ptr points to: "<<*num_ptr<<"\n";

	//auto num1 = 10;
	num_ptr = &num1; //point to the addres of variable num1
	cout<<"Num1 addres is: "<<&num1<<"\n";
	cout<<"Addres that num_ptr points to: "<<num_ptr<<"\n";

	int *num_ptr1 = &num; //num_ref, num_ref1, num_ptr, and num_ptr1 all pointing to the same value

	return 0;
}