/*
CH-230-A
A10_P3.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "City.h"
#include <iostream>


using namespace std;

void City::setname(std::string newname)
{
    name = newname;
}

void City::setpop(int newpop)
{
    pop = newpop;
}
   
 void City::setmayor(std::string newmayor)
 {
     mayor = newmayor;
 }

void City::setarea(double newarea)
{
    area = newarea;
}

std::string City::getname()
{
    return name;
}

int City::getpop()
{
    return pop;
}

std::string City::getmayor()
{
    return mayor;
}

double City::getarea()
{
    return area;
}

void City::print()
{
    cout<<" Name : " << name << " .Population : " << POP;
    cout<<" . Mayor : " << mayor << ". Area : " << area <<endl;
}
