/*
CH-230-A
a13 p5.[cpp]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int i) { x = i; }
    void print() { cout << x; }
};

class B : virtual public A
{
public:
    B() : A(10) {}
};

class C : virtual public A
{
public:
    C() : A(10) {}
};

class D : public B, public C
{
public:
    D() : A(10) {}
};

int main()
{
    D d;
    d.print();
    return 0;
}


/*ERRORS*/

/*We have an error because the code hasn't any constructors declared in class D,
the default constructor for D can't be executed eventough, it defaults
to A's default constructor which isn't defined, compiler generates
a default constructor in A, it is deleted automatically.*/
 
/*SOLUTION*/

/*To solve the error in our code, we can either call the parametric
constructor of the base class or we can also declare a default
constructor in class A.
In this case I called the parametric constructor of class A*/
