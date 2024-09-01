/*
CH-230-A
a13 p2.[cpp]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;
                                
Complex::Complex() {
 
    real = imag = 0;
    cout << "Constructor one is being called" << endl;
}

//for complex number w/only the real part
Complex::Complex(float r)
{
    real = r;
    imag = 0;
}

//for complex number w/both real and imaginary parts
Complex::Complex(float r, float i)
{
    real = r;
    imag = i;
}

//setting the real part value of the complex number
void Complex::setReal(double r)
{
    real = r;
}

double Complex::getReal()
{
    return real;
}


void Complex::setImag(double i)
{
    imag = i;
}

double Complex::getImag()
{
    return imag;
}

//copy constructor
Complex::Complex(Complex &copy)
{
    real = copy.real;
    imag = copy.imag;
}

                                                                      //operator overloading for +
Complex Complex::operator+(Complex & a)
{
    Complex temp;
    temp.real = real+a.real;
    temp.imag=imag+a.imag;
    return temp;
}

                                                                    //operator overloading for -
Complex Complex::operator-(Complex & a)
{
    Complex temp;
    temp.real = real - a.real;
    temp.imag = imag - a.imag;
    return temp;
}

                                                             //operator overloading for *
Complex Complex::operator*(Complex & a)
{
    Complex temp;
    temp.real = (real * a.real) - (imag * a.imag);
     temp.imag = (real * a.imag) + (imag * a.real);
    return temp;
}
                                                        //operator overloading for =
Complex & Complex::operator=(const Complex & a)
{
    real = a.real;
    imag = a.imag;
    return *this;
}

                                                             //operator overloading for <<
ostream& operator << (ostream& out, Complex& c)

{
    out << noshowpos << c.real << showpos << c.imag << "i";
    return out;
}

                                                                 //operator overloading for >>
istream& operator >> (istream& in, Complex& c)
{
    in >> noshowpos >> c.real >> showpos >> c.imag;
    return in;
}

void Complex::print()
{
    if (imag)
    {
        cout << noshowpos << real << showpos << imag << "i" << endl;
    }
    else
    {
        cout << noshowpos << real << showpos << endl;
    }
}

                                //Conjugation of the complex number
void Complex::conj()
{

    Complex c(real, (-1) * imag);
    c.print();
}

                                //destructor for complex class
Complex::~Complex()
{
}
