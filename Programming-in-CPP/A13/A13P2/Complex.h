/*
CH-230-A
a13 p2.[cpp]
Amine Chahi
m.chahi@jacobs-university.de
*/
#include<iostream>
#include<cmath>

using namespace std;

class Complex {

private:  // internal implementation is hidden
    double real;  // real part
    double imag;  // imaginary part

public:
    Complex();                                  // empty constructor
    Complex(float);                            //constructor if there exists only rp
    Complex (float, float);                   //constructor for both real and imaginary
    Complex (Complex &copy);                 //copy constructor
    ~Complex();                             //empty destructor

					  //Operator overloading for +, -, *, =, <<, >>
    Complex operator+(Complex &);
    Complex operator-(Complex &);
    Complex operator*(Complex &);
    Complex & operator=(const Complex &);
    friend ostream& operator << (ostream&, Complex&);
    friend istream& operator >> (istream&, Complex&);

    void setReal(double); //setter for rp.
    void setImag(double); //setter for ip.
    void conj(); //function for conjugation of complex number.
    double getReal(); //getter for rp.
    double getImag(); //getter for ip.
   
    void print();

};
