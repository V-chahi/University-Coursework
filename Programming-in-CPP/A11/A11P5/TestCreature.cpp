/*
CH-230-A
A10_P5.c
m.chahi@jacobs-university.de
*/


#include "Creature.h"
#include <iostream>

using namespace std;

int main()
{ 
   string ans;
   Wizard* a;
   Dog* b;
   Cat* c; 
   do
   {
        cout<<"Select "<<endl;
        cin>>ans;

        if (ans == "wizard")
        {
            cout << "\nCreating a Wizard.\n";
            a = new Wizard;
            a->run();
            a->hover();
            delete a;
        }
        else if (ans == "object1")
        {
            cout << "\nCreating a Dog.\n";
            b = new Dog;
            b->run();
            b->printing();
            delete b;
        }
        else if(ans == "object2")
        {
            cout << "\nCreating a Cat.\n";
            c = new Cat;
            c->run();
            c->ran();
            delete c;
        }
    } while (ans != "quit");
    return 0;
} 