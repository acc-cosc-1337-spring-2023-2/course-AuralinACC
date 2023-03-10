void val_params(int num);
void ref_params(int &num); //num will store the address of the function argument 
void ref_const_params(const int &num); // has access to ref memory but is constant

/*
The three statements are function declarations that differ in their parameter types. 
Here is an explanation of each:

void val_params(int num);
This declares a function called val that takes an integer num as a parameter passed by value.
When this function is called, a copy of the argument passed to it is made, and any modifications to 
the num parameter within the function do not affect the original argument passed in.
This means that changes to the num parameter within the val function will not be reflected outside of 
the function's scope.

void ref_params(int &num);
This declares a function called val that takes an integer num as a parameter passed by reference.
When this function is called, the original argument passed to it is used directly, and any 
modifications to the num parameter within the function will affect the original argument passed in.
This means that changes to the num parameter within the val function will be reflected outside of 
the function's scope.

void ref_const_params(const int &num);
This declares a function called val that takes a constant integer num as a parameter passed by reference.
When this function is called, the original argument passed to it is used directly, but any 
attempts to modify the num parameter within the function will result in a compilation error.
This means that the val function cannot modify the original argument passed in, but it can still 
access its value.
This is useful when you want to pass a value to a function for reading purposes only, and not allow 
the function to modify it.
In summary, the differences between the three function declarations are in how the function parameters 
are passed and whether or not they can be modified within the function.
*/
