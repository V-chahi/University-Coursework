/*
CH-230-A
a12 p6.h
Amine Chahi
m.chahi@jacobs-university.de
*/

#ifndef Square_h
#define Square_h
#include "Rectangle.h"

class Square : public Rectangle {
    public:
        Square(const char *n, double);
        ~Square(); 

        double calcArea() const;

        double perimeter() const;
    private:
        double side;
};

#endif /* Square_h */
