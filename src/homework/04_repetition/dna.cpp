//add include statements
#include "dna.h"

using std::cout; using std::cin;

//add function(s) code here
int factorial(int num)
{
    auto fact = 1;

    while(num > 0)
    {
        fact *= num;
        num--;
    }
    return fact;
}

int gcd(int num1, int num2)
{
    if(num1 < num2)
    {
        auto temp_num = num1;
        num1 = num2;
        num2 = temp_num; 
    }
    while(num1 > num2)
    {
        num1 = num1 - num2;
    }
    return num1;
}

void run_menu()
{
    auto option = 0;

    do
    {
        display_menu();

        cout<<"\nEnter menu option: ";
        cin>>option;

        auto num = 0;
        auto num1 = 0;
        auto num2 = 0;
    

        switch(option)
        {
        case 1:
            cout<<"\nSelected Factorial: \n";
            cout<<"Enter a positive integer: ";
            cin>>num;
            cout<<"The factorial of the number entered is: "<<factorial(num)<<"\n\n";
            break;
        case 2:
            cout<<"\nSelected Greatest Common Divisor: \n";
            cout<<"Enter a positive integer: ";
            cin>>num1;
            cout<<"Enter a second positive integer: ";
            cin>>num2;
            cout<<"\nThe Greatest Common Divisor of the numbers entered is: "<<gcd(num1, num2)<<"\n\n";
            break;
        case 3:
            cout<<"\nSelected Exit: \n";
            char choice;
            cout<<"Are you sure you want to exit(Y/N)?\n";
            cin>>choice;
            cout<<"\n";
            if(choice == 'y' || choice == 'Y')
            {
                cout<<"Exiting Program"<<"\n\n";
                option++;
                
            }
            else if(choice  == 'n' || choice == 'N')
            {
                break;
            }
        }
        
    } 
    while (option != 4);
}

void display_menu()
{
    cout<<"1-Factorial\n";
	cout<<"2-Greatest Common Divisor\n";
	cout<<"3-Exit\n";
}
