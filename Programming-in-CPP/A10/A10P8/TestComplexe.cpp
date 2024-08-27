/*
CH-230-A
A10_P8.cpp
m.chahi@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>
#include <cstdlib>

int main() {
    int x;
    Complex c1,c2;

    std::cout<<"real part of c1: ";
    std::cin>>x;
    c1.setReal(x);
    std::cout<<"imaginary part of c1: ";
    std::cin>>x;
    c1.setImag(x);

    std::cout<<"real part of c2: ";
    std::cin>>x;
    c2.setReal(x);
    std::cout<<"imaginary part of c2: ";
    std::cin>>x;
    c2.setImag(x);

    std::cout<<"The conjugate of c1: ";
    (c1.conj()).print();

    std::cout<<"The sum of c1 and c2: ";
    (c1.add(c2)).print();

    std::cout<<"The  difference between c1 and c2: ";
    (c1.sub(c2)).print();
    
    std::cout<<"The  multiplication of c1 and c2: ";
    (c1.mult(c2)).print();

    return 0;
}
