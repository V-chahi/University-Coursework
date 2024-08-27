/*
CH-230-A
A10_P6.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "Critter.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
	Critter prot1;
	Critter prot2(" Prototype 2 ");
	Critter prot3(" Prototype 3 ", 15, 3, 22.3);
	Critter prot4(" Prototype 4 ", 15, 3);

	prot3.setHunger(2);
	prot4.setHunger(2);

	prot1.print();
	prot2.print();
	prot3.print();
	prot4.print();
}