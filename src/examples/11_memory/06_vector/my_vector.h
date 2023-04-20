//
#include <iostream>

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
    Vector(int s);
    Vector(const Vector& v);//copy constructor: rule 1 of 3 of legacy C++
    int Size()const{return size;}//current size of the listl doubles at the current_index
    int Capacity()const{return capacity;}
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];} 
    ~Vector();
private:
    int* elements;//holds the dynamic list on the heap
    int size{0};//current size of the listl doubles at the current_index
    int capacity;//total availablle slots for elements
};

#endif

//NOT A CLASS FUNCTION; THESE ARE FREE FUNCTIONS
void use_vector();