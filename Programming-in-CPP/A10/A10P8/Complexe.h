/*
CH-230-A
A10_P8.cpp
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

class Complex
{
private:

    int real;
    int imaginary;

public:
   
    Complex();
    Complex(int real, int imaginary);
    Complex(const Complex&);


	void setReal(int re);
	void setImag(int imag);


	int getReal();
	int getImag();


    Complex conj();

    Complex add(Complex);
    Complex sub(Complex);
    Complex mult(Complex);


	void print();

    ~Complex();	
};

