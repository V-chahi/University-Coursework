/*
CH-230-A
A10_P2.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "Critter.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv){

    Critter c;

     string name;
     double height;
     int boredom;
     int hunger;

 
	cout << endl << " Enter data: " << endl;
	cout << "Name: ";
	getline(cin, name);
	c.setName(name);
        cout<<"Height: ";
	cin>>height;
	c.setHeight(height);

   cout<<"Boredom: ";
   cin >> boredom;
   c.setBoredom(boredom);
   cout << "Hunger : ";
   cin >> hunger;
   c.setHunger(hunger);

	cout << "Succescfully Created:" << endl;
	c.print();
        return 0;
}
