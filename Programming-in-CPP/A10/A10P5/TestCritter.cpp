/*
CH-230-A
A10_P5.c
m.chahi@jacobs-university.de
*/

#include "Critter.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv){

	Critter prot1;
	Critter prot2("Template 2");
	Critter prot3("Template 3",11,22,333.444);
	Critter prot4("Template 4",212,6);
	prot3.setHunger(3);
	prot4.setHunger(3);
	prot1.print();
	prot2.print();
	prot3.print();
	prot4.print();
}