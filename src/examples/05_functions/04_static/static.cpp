#include"static.h"

using std::cout;

void use_static_var()
{
    static auto num = 0;
    cout<<&num<<"\n";
    num++;
    cout<<num<<"\n";
}
void use_static_var1()
{
    static auto num = 0;
    cout<<&num<<"\n";
    num++;
    cout<<num<<"\n";
}
/*
In C++, a static variable is a variable that is shared among all instances of a class, rather than being
unique to each instance. A static variable is declared using the static keyword, either as a member of a 
class or as a variable within a function.

Here are some important characteristics of static variables in C++:

A static variable declared as a member of a class can be accessed using the class name and the scope 
resolution operator ::, rather than through an object of the class.
A static variable declared within a function is initialized only once when the program starts, and 
retains its value between function calls.
A static variable declared within a function has a lifespan that extends until the end of the program 
execution, regardless of where it is declared within the function.
A static variable declared within a function is not destroyed when the function returns, unlike a 
local variable.
Static variables are useful in situations where you need to maintain a common value or state across all 
instances of a class or multiple function calls, or when you want to limit the scope of a variable to 
a specific function but preserve its value between function calls.
*/