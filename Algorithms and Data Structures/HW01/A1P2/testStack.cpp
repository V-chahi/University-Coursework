/*
CH-231-A
a1_p2.cpp
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
        Stack<int> item;
    
    for (int i = 0; i < 10; i++)                             //Pushing 10 elements
    {
        item.push(i);
    }
    
        Stack<int> itemcpy(item);                        //Printing using copie Constructor
    itemcpy.print();
    
        Stack<double> item1(20);                    //Init stack w/ size 20
        
    for (int i = 0; i < 20; i++)
    {                                               //Pushing to Stack
        item1.push(i*1.5);
    }
    item1.print();
    
    cout<<"Current number of elements:"<<item1.getNumEntries()<<endl;
    cout<<"Data at top of stack:"<<item1.back()<<endl;
    for (int i = 0; i < 20; i++)            //Emptying Stack
    {
        double out;
        item1.pop(out);
        cout<<out<<" ";
    }
    cout<<endl;

}
