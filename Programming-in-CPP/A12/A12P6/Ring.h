/*
CH-230-A
a12 p6.h
Amine Chahi
m.chahi@jacobs-university.de
*/
#ifndef Ring_h
#define Ring_h
#include "Circle.h"

class Ring : public Circle {

    public:
        Ring(const char *n, double outer, double inner);
        ~Ring(); 

        double calcArea() const;
       
        double perimeter() const;

    private:
        double innerradius;
};

#endif /* Ring_h */
