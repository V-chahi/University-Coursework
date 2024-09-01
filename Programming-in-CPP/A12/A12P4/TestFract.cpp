/*
CH-230-A
A12_P4.c
m.chahi@jacobs-university.de
*/

#include "Fract.h"
#include <iostream>

using namespace std;

int main(){

	Fraction x, y;
    cout<<"Enter a rational number x: ";
    cin >> x;
    cout<<"Enter a rational number y: ";
    cin >> y;
    
    cout<<"Product of x & y is: "<<x*y;
    cout<<"Division of x & y is: "<<x/y;

    return 0;
}