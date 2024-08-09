/*
CH-230-A
A10_P1.c
m.chahi@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
        int weight;
        string color;
 
	cout << endl << " Enter data : " << endl;
	cout << "Name: ";
	getline(cin, name);
	c.setName(name);
	cout << "Hunger Level : ";
	cin >> hunger;
	c.setHunger(hunger);
    cout<<"Weight Level : ";
    cin >> weight;
    c.setWeight(weight);
	cin.get();
    cout<<"Color : ";
    getline(cin, color);
    c.setColor(color);

    

	cout << "Results:" << endl;
	c.print();
        return 0;
}