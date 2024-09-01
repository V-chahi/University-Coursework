/*
CH-230-A
a12 p6.cpp
Amine Chahi
m.chahi@jacobs-university.de
*/
#include "Ring.h"
#include <iostream>
#include <cmath>
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

/* Parametric Constructor for Ring */
Ring::Ring(const char *n, double outer, double inner)
                    : Circle(n, outer) {
    innerradius = inner;
}

Ring::~Ring() {
    std::cout << "Destructor is being called on Ring...\n";
}

double Ring::calcArea() const {
    std::cout << "calcArea of Ring..." << std::endl;
    return (Circle::calcArea()-
        (innerradius * innerradius * M_PI));
}

double Ring::perimeter() const{
    std::cout << "perimeter of Ring..." << std::endl;
    return 2 * innerradius * M_PI;
}
