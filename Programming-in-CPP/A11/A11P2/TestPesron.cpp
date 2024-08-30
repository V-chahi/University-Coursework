/*
CH-230-A
A10_P2.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "Person.h"
#include <iostream>

int main()
{
    Person P1, P2, P3;

    p1.setname("P1");
    p2.setname("P2");
    p3.setname("P3");
    
    p1.setage(1);
    p2.setage(12);
    p3.setage(123);
    
    p1.setheight(1.222222);
    p2.setheight(45142.541435);
    p3.setheight(43591435.3425415);
    
    p1.setweight(434.4);
    p2.setweight(53145.5);
    p3.setweight(455.4);

    p1.print();
    p2.print();
    p3.print();

    Person p4(p1);
    Person p5("p5",321334,699669.69,323);
    p4.print();
    p5.print();
    return 0;
}
