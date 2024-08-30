/*
CH-230-A
A10_P2.c
m.chahi@jacobs-university.de
*/


#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>


class Person
{
    private:
    std::string name;
    int age;
    double height;
    float weight;

    public:
    Person();
    Person(const std::string& newname,const int newage,const double newheight,const float newweight);
    Person(Person& b);

    void setname(const std::string& newname);
    void setage(const int newage);
    void setheight(const double height);
    void setweight(const float weight);

    std::string getname() const ;
    int getage() const; 
    float getheight() const;
    double getweight() const;

    void print() const;

};

#endif
