/*
CH-230-A
A11_P1.c
m.chahi@jacobs-university.de
*/

#include "Box.h"
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a N° of boxes: "<<endl;
    cin>>n;

    Box *list;
    list = new Box[2*n]; 
    
    double height;
    double width;
    double depth;

    for (int i = 0; i < n; i++) 
    {
        cout<<"Box number " <<i <<endl;
        cout<<"Height"<<endl;
        cin>>height;
        list[i].setheight(height);
        cout<<"Width"<<endl;
        cin>>width;
        list[i].setwidth(width);
        cout<<"Depth"<<endl;
        cin>>depth;
        list[i].setdepth(depth);
    }

    for (int i = n; i < n*2; i++)
    {
        list[i] = Box(list[i-n]);
    }

    for (int i = 0; i < n*2; i++)
    {
        list[i].vprint();
    }
    
     delete [] list;

    return 0;    
}
Box(a[n+i])