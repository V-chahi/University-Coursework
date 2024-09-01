/*
CH-230-A
a12 p6.h
Amine Chahi
m.chahi@jacobs-university.de
*/

#ifndef _Area_h
#define _Area_h

#include <stdio.h>
                                //public and private properties for area class
class Area {

    public:

        Area(const char *n);
        virtual ~Area();
        void getColor() const;
        virtual double calcArea() const = 0;
        virtual double calcPerimeter() const = 0;

    private:

        char color[11];
};
#endif
