/*
CH-230-A
a13 p4.cpp
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <iostream>
using namespace std;

class A
{
    int x;

public:
    void setX(int i) { x = i; }
    void print() { cout << x; }
};

class B : public virtual A                                          /*Modification*/
{
public:
    B() { setX(10); }
};

class C : public virtual A                                    /*Modification*/
{
public:
    C() { setX(20); }
};

class D : public B, public C
{
public:
    D() { setX(40); }                                /*Modification*/
};

int main()
{
    D d;
    d.print();
    return 0;
}

/*ERRORS*/

/*The print method for class D -->AMBIGUOUS. That's because it is inherited
from two classes: B&C. since it's the child of both B and C,
compiler can't decide from which parent class, B or C,
print method is to be called which results in ambiguity.*/

/*SOLUTION*/

/*To solve this error of ambiguity, we can simply call the print method
as a virtual method from the classes B and C for which base class A
also needs to be called as virtual in B and C so that B and C would be
the virtual classes of the base class A.*/
