/*
CH-230-A
A10_P2.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "Critter.h"
#include <iostream>

using namespace std;

void Critter::setName(string& newname) 
{
	name = newname;
}

void Critter::setHeight(double newheight)
{
	height = newheight;
}
  

void Critter::setHunger(int newhunger) 
{
	hunger = newhunger;
}

void Critter::setBoredom(int newboredom)
{
	boredom = newboredom;
}


void Critter::print() {
	cout << " Name : " << name << ".Height : " << height << "." <<endl;
    cout << " Boredom Level : " << boredom << ". Hunger level : " << hunger << "." << endl;
}

std::string Critter::getname()
{
	return name;
}

double Critter::getHeight() 
{
	return height;
}

int Critter::getBoredom() 
{
	return boredom;
}

int Critter::getHunger() 
{
	return hunger;
}
