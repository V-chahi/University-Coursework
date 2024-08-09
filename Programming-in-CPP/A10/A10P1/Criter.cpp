/*
CH-230-A
A10_P1.c
m.chahi@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setWeight(double newweight){
	weight = newweight;
}
void Critter::setColor(std::string& newcolor){
    color = newcolor;
}

void Critter::print() {
	cout << "Mi amo " << name << ". hunger level " << hunger << "." << endl;
    cout << "Weight level " << weight << "Color is " << color << "." <<endl;
}

int Critter::getHunger() {
	return hunger;
}