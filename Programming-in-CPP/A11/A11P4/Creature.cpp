/*
CH-230-A
A11_P4.c
m.chahi@jacobs-university.de
*/


#include <iostream>
using namespace std;
#include "Creature.h"

Creature::Creature(): distance(10)
{

}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  
Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
Dog::Dog()
{
    name="Maaammma";
}  

void Dog::printing() const
{
   cout<<"name:"<<name<<endl;
   cout<<"distance:"<<name<<endl;
}
Cat::Cat()
{
    time = 69;
}  

void Cat::ran() const
{
   cout<<"time:"<<time<<endl;
   cout<<"distance:"<<distance<<endl;
}