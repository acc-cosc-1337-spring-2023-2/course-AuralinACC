//cpp
/*
#include "arrays_char.h"
using std::cout; using std::string;

void use_char_null_terminated()
{
    const auto SIZE = 11;
    char name[SIZE];
    name[0] = 'C';
    name[1] = '+';
    name[2] = '+';
    name[3] = '\0';//num terminators

    cout<<name<<"\n";

    auto i = 0;

    while(name[i] != '\0'){
        cout<<name[i]<<"\n";
        i++;
    }
}
void use_string_terminated()
{
    string name = "C++ rocks";
    cout<<name<<"\n\n";

    string name = "C++\0 rocks";
    cout<<name<<"\n\n";
    
}
char* get_dynamic_memory(const int size)
{   
    char* chars = new char[size];
    cout<<"Create memory"<<chars<<"\n";

    return chars;
}
void delete_dynamic_char_memory()
{
    cout<<"delete memory "<<array<<"\n";
    delete[] array;

*/