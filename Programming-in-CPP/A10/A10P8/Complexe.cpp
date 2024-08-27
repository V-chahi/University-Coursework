/*
CH-230-A
A10_P8.cpp
m.chahi@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"


void Complex::setReal(int re){
    real = re;
}
void Complex::setImag(int imag){
    imaginary = imag;
}

int Complex::getReal(){
    return real;
}
int Complex::getImag(){
    return imaginary;
}


Complex::Complex() {
    std::cout<<"Default constructor was called"<<std::endl;
    real = 0;
    imaginary = 0;
}

Complex::Complex(const Complex& src) {
    std::cout<<"Copy constructor was called"<<std::endl;
	real = src.real;
    imaginary = src.imaginary;
}

Complex::Complex(int re, int im) {
	real = re;
    imaginary = im;
}

Complex::~Complex(){
    std::cout<<"Destructor was called"<<std::endl;
}

Complex Complex::conj() {
    Complex temp;
    temp.real = real;
    temp.imaginary = -imaginary;
    return temp;
}

Complex Complex::add(Complex z) {
    Complex temp;
    temp.real = real + z.real;
    temp.imaginary = imaginary + z.imaginary;
    return temp;
}

Complex Complex::sub(Complex z) {
    Complex temp;
    temp.real = real - z.real;
    temp.imaginary = imaginary - z.imaginary;
    return temp;
}

Complex Complex::mult(Complex z) {
    Complex temp;
    temp.real = (z.real*real) - (z.imaginary*imaginary);
    temp.imaginary = (z.imaginary*real) + (z.real*imaginary);
    return temp;
}

void Complex::print(){
    if(imaginary < 0)
        std::cout<<real<<" - "<<-imaginary<<"i"<<std::endl;
    else
        std::cout<<real<<" + "<<imaginary<<"i"<<std::endl;
}
