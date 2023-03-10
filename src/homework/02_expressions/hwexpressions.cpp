#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
//In file hwexpressions.cpp  write function code, multiply tax_rate and meal_amount and return their 
//                  product.
double get_sales_tax_amount(double meal_amount)
{
	return tax_rate * meal_amount;
}
//In file hwexpressions.cpp, write function code to multiply  meal_amount and tip_rate, return their 
//                   product.
double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * tip_rate;
}
