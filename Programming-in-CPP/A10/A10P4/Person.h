/*
CH-230-A
A10_P4.c
m.chahi@jacobs-university.de
*/

#include <string>


class Person{

    private:
    std::string name;
    int age;
    double height;
    float weight;

    public:
    void setname(const std::string &newname);
    void setage(const int newage);
    void setheight(const double height);
    void setweight(const float weight);

    std::string getname();
    int getage();
    float getheight();
    double getweight();

    void print();

};