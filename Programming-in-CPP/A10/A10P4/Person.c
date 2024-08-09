/*
CH-230-A
A10_P4.c
m.chahi@jacobs-university.de
*/

#include "Person.h"
#include <iostream>

using namespace std;


void Person::setname(const std::string *newname)
{
    name = newname;
}

void Person::setage(const int newage)
{
    age = newage;
}
   
 void Person::setheight(const double newheight)
 {
     height = newheight;
 }

void Person::setweight(const float newweight)
{
    weight = newweight;
}

std::string Person::getname()
{
    return name;
}

int Person::getage()
{
    return age;
}

float Person::getheight()
{
    return height;
}

double Person::getweight()
{
    return weight;
}

void Person::print()
{
    cout<<" Name : " << name << " Age :  " << age;
    cout<<" Height : " << height << "  Weight : " << weight <<endl;
}