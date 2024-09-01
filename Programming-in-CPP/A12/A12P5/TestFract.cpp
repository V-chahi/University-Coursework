/*
CH-230-A
A12_P5.cpp
m.chahi@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{

	Fraction x, y;
    cout<<"Enter a rational number x : ";
    cin >> x;
    cout<<"Enter a rational number y : ";
    cin >> y;

    if(x > y)
        cout<<"The bigger fraction is: "<<x;
    else 
        cout<<"The bigger fraction is: "<<y;



    cout<<"The sum of x & y : "<<x+y;
    cout<<"The difference of x & y : "<<x-y;

    return 0;
}