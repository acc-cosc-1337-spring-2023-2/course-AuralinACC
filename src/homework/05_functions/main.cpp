/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/ 
#include "func.h"
#include<iostream>

using std::cout; using std::cin; using std::string;

int main() 
{
	auto option = 0;

    do
    {
        cout<<"1-Get GC Content\n";
		cout<<"2-Get DNA Complement\n";
		cout<<"3-Exit\n";

        cout<<"\nEnter menu option: ";
        cin>>option;

        string dna;

        switch(option)
        {
        case 1:
            cout<<"\nSelected Get GC Content: \n";
            cout<<"Enter a DNA string that contains only the characters 'G', 'C', 'T' and 'A': ";
            cin>>dna;
            cout<<"The GC content is: "<<get_gc_content(dna)<<"\n\n";
            break;
        case 2:
            cout<<"\nSelected DNA Complement: \n";
            cout<<"Enter a DNA string that contains only the characters 'G', 'C', 'T' and 'A': ";
            cin>>dna;
            cout<<"The DNA complement is: "<<get_dna_complement(dna)<<"\n\n";
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

	return 0;
}