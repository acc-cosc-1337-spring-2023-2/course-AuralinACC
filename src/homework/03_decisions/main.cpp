//write include statements
#include "decisions.h"

using std::cout; using std::cin; using std::string;

int main() 
{
	int menu_option = 0;
	int grade = 0;

	cout<<"\n     MAIN MENU\n";
	cout<<"1-Leter grade using if\n";
	cout<<"2-Letter grade using switch\n";
	cout<<"3-Exit\n\n";
	cout<<"Enter a selection: ";
	cin>>menu_option;
	
	if (menu_option == 1)
	{
		cout<<"Enter a grade between 0 and 100: ";
		cin>>grade;

		if(grade >= 0 && grade <= 100)
		{
			auto result = get_letter_grade_using_if(grade);
			cout<<"Result from using if: "<<result<<"\n\n";
		}
		else
		{
			cout<<"Number is out of range\n\n";
		}
	}
	else if (menu_option == 2)
	{
		cout<<"Enter a grade between 0 and 100: ";
		cin>>grade;

		if(grade >= 0 && grade <= 100)
		{
			auto result = get_letter_grade_using_switch(grade);
			cout<<"Result from using switch: "<<result<<"\n\n";
		}
		else
		{
			cout<<"Number is out of range\n\n";
		}
	}
	else if (menu_option == 3)
	{
		cout<<"Exiting...\n\n";
	}
	else
	{
		cout<<"Invalid entry\n\n";
	}

	return 0;
}