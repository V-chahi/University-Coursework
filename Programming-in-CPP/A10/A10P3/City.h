/*
CH-230-A
A10_P3.c
m.chahi@jacobs-university.de
*/


#ifndef _CITY_H_
#define _CITY_H_

#include <string>


class City{

    private:
    std::string name;
    int pop;
    std::string mayor;
    double area;

    public:
    void setname(std::string newname);
    void setpop(int newpop);
    void setmayor(std::string newmayor);
    void setarea(double newarea);

    std::string getname();
    int getpop();
    std::string getmayor();
    double getarea();

    void print();

};
#endif
