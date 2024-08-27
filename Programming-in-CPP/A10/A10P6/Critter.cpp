/*
CH-230-A
A10_P6.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "Critter.h"
#include <iostream>

using namespace std;
Critter::Critter()
{
	name = "default_critter";
	hunger = 0;
	height = 5;
	boredom = 0;
}
Critter::Critter(std::string newname)
{
	name = newname;
	hunger = 0;
	height = 5;
	boredom = 0;

}

Critter::Critter(std::string newname,int newhunger,int newboredom,double newheight)
{
	name = newname;
	hunger = getdhunger(newhunger);
	boredom = newboredom;
	height = newheight;
}



void Critter::print() {
	cout<< "Name = " <<name<<endl;
	cout<< "Hunger = " << getihunger() <<endl;
	cout<< "Boredom = " <<boredom<<endl;
	cout<< "Height = " <<height<<endl;
	cout<<endl;
}

void Critter::setName(string& newname) 
{
	name = newname;
}

void Critter::setHunger(int newhunger) 
{
	
	hunger = getdhunger(newhunger);
}

void Critter::setBoredom(int newboredom)
{
	boredom = newboredom;
}

void Critter::setHeight(double newheight)
{
	height=newheight;
}
  
std::string Critter::getname()
{
	return name;
}

int Critter::getHunger() 
{
	return hunger;
}

int Critter::getBoredom() 
{
	return boredom;
}

double Critter::getHeight() 
{
	return height;
}


double Critter::getdhunger(int hunger){
	return (double)hunger / 10.0;
}

int Critter::getihunger()
{
	return (hunger * 10);
}