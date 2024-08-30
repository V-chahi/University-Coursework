/*
CH-230-A
A11_P2.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "Person.h"
#include <iostream>


using namespace std;

void Person::setname(const std::string& newname)
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

std::string Person::getname () const
{
    return name;
}

int Person::getage () const
{
    return age;
}

float Person::getheight() const
{
    return height;
}

double Person::getweight() const
{
    return weight;
}

void Person::print() const
{
    cout<<"The name is " << name << " .My age is  " << age;
    cout<<" .Height is " << height << ". Weight is " << weight <<endl;
}

Person::Person()
{
    name = "";
    age = 0;
    height = 0;
    weight = 0;
}

Person::Person(const std::string& newname,const int newage,const double newheight,const float newweight)
{
    name = newname;
    age = newage;
    height = newheight;
    weight = newweight;
}

Person::Person(Person& b)
{
    name = b.name;
    age = b.age;
    height = b.height;
    weight = b.weight;
}
