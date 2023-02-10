//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	//Create double variables named meal_amount, tip_rate, tip_amount, tax_amount, and total.
	double meal_amount = 0;
	double tip_rate = 0;
	double tip_amount = 0;
	double tax_amount = 0;
	double total = 0;

	//Use the cin object to capture the number from the keyboard, assign the number to 
    // meal_amount.
	cout<<"Enter cost of meal: ";
	cin>>meal_amount;
	
	//Call the get_sales_tax_amount with meal_amount as its parameter, 
	//assign the return value of the function get_sales_tax_amount to the tax_amount variable. 
	tax_amount = get_sales_tax_amount(meal_amount);

	// Capture the tip rate from keyboard and assign the value to tip_rate variable.
	cout<<"Enter the tip rate as a decimal: ";
	cin>>tip_rate;
	//Call the function get_tip_amount with meal_amount and tip_rate as its parameters, 
    //set function get_tip_amount return value to tip_amount.
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	//Add tip_amount, tax_amount and meal_amount , and save result to total variable.
	total = tip_amount + tax_amount + meal_amount;

	/*
	Display a receipt (formatting the number decimal spaces is optional): 
     Meal Amount:           20
     Sales Tax:              1.35       
     Tip Amount:            3
     Total:                    24.35
	*/
	cout<<"\n-----------------------------------------\n";
	cout<<"Meal Amount: $"<<meal_amount<<"\n";
	cout<<"Tax amount:  $"<<tax_amount<<"\n";
	cout<<"Tip amount:  $"<<tip_amount<<"\n";
	cout<<"Total:       $"<<total<<"\n";

	return 0;
}
