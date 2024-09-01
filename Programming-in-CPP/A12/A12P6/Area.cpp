/*
CH-230-A
a12 p6.cpp
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

                                //Area Constructor
Area::Area(const char* n) {
    strncpy(color, n, 10);
    cout << "Area constructor being called...\n";
}
                            //Destructor
Area::~Area() {
}
void Area::getColor() const {
    cout << "\n" << color << ": ";
}
