/*
CH-230-A
a12 p6.h
Amine Chahi
m.chahi@jacobs-university.de
*/
#ifndef Circle_h
#define Circle_h

#include "Area.h"

class Circle : public Area {
    public:
        Circle(const char *n, double a);
        ~Circle();
        double calcArea() const;

        double perimeter() const;
    private:
        double radius;
};
#endif /* Circle_h */
