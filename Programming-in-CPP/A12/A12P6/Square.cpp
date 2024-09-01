/*
CH-230-A
a12 p6.cpp
Amine Chahi
m.chahi@jacobs-university.de
*/
#include "Square.h"
#include <iostream>
/* Parametric Constructor for Square */
Square::Square(const char *n, double s) : Rectangle(n, s, s) {
    side = s;
}

Square::~Square() {
    std::cout << "Destructor is being called on Square...\n";
}

double Square::calcArea() const {
    std::cout << "calcArea of Square..." << std::endl;
    return side*side;
}


double Square::perimeter() const{
    std::cout << "Square Perimeter" << std::endl;
    return 2 * (side + side);
}
