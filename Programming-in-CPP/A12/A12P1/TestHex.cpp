/*
CH-230-A
A12_P1.c
m.chahi@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"
using namespace std;

int main()
{
    Hexagon one("Hex1",1,2,3,"White");
    Hexagon two("Hex2",3,2,1,"Black");
    Hexagon three(two);

    one.printName();
    cout<<"Area: "<<one.area()<<endl;
    cout<<"Perimeter: "<<one.perimeter()<<endl;

    two.printName();
    cout<<"Area: "<<two.area()<<endl;
    cout<<"Perimeter: "<<two.perimeter()<<endl;

    three.printName();
    cout<<"Area: "<<three.area()<<endl;
    cout<<"Perimeter: "<<three.perimeter()<<endl;

  return 0;
}