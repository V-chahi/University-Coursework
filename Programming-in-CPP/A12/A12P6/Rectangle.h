/*
CH-230-A
a12 p6.h
Amine Chahi
m.chahi@jacobs-university.de
*/

#ifndef Rectangle_h
#define Rectangle_h
#include "Area.h"

class Rectangle : public Area {

    public:
        Rectangle(const char *n, double a, double b);
        ~Rectangle(); 
       
        double calcArea() const;
       
        double perimeter() const;


    private:
        double length;
        double width;
};

#endif /* Rectangle_h */
