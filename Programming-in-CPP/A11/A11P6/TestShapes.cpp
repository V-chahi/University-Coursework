/*
CH-230-A
A10_P6.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "Shapes.h"
#include<iostream>

using namespace std;

int main(int argc, char** argv) 
{
  
  Circle c("Circle", 2, 6, 9);
  RegularPolygon r("TRIANGLE", 1, 2, 3);
  Rectangle r1("Rectangle",0,0,35,5);
  Square s("Square",0,0,5);

  c.printName(); 
  cout<<" Area: "<<c.area()<<endl;
  cout<<" Perimeter: "<<c.perimeter()<<endl;
  cout<<""<<endl;

  r1.printName();
  cout<<" Area: "<<r1.area()<<endl;
  cout<<" Perimeter: "<<r1.perimeter()<<endl;
  cout<<""<<endl;

  s.printName();
  cout<<" Area: "<<s.area()<<endl;
  cout<<" Perimeter: "<<s.perimeter()<<endl;
  cout<<""<<endl;

}