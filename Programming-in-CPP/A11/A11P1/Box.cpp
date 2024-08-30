/*
CH-230-A
A11_P1.cpp
m.chahi@jacobs-university.de
*/

#include "Box.h"
#include <iostream>
using namespace std;


Box::Box()
{
    height = 0;
    width = 0;
    depth = 0;
}

Box::Box(double newheight,double newwidth,double newdepth)
{
    height = newheight;
    width = newwidth;
    depth = newdepth;
}

Box ::~ Box () 
{
   
    //cout << "Executing destructor " << endl ;
}


Box::Box(Box& b)
{
    height = b.height;
    width = b.width;
    depth = b.depth;

}

void Box::setheight(double newheight)
{
   height = newheight;
}

void Box::setwidth(double newwidth)
{
   width = newwidth;
}

void Box::setdepth(double newdepth)
{
   depth = newdepth;
}

double Box::getheight()
{
    return height;
}

double Box::getwidth()
{
    return width;
}


double Box::getdepth()
{
    return depth;
}

void Box::vprint()
{
    cout<<"The volume is "<< height * width * depth <<endl;
}