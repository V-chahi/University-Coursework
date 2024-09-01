/*
CH-230-A
a13 p8.[cpp]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/* Class Motor */
class Motor
{

public:
    Motor()
    {
        /* Throwing ERROR upon construction */
        throw "This motor has problems";
    }
    virtual ~Motor() {}
};

/* Class Car w/ ptr to motor */
class Car
{
private:
    Motor *motor;

public:
    Car()
    {
        /*Initializing Motor upon construction */
        try
        {
            motor = new Motor();
        }
        catch (const char *str)
        {
            cerr << str << endl;
            /* Throwing another ERROR after catching one */
            throw "The car that's in this garage has problems with the motor";
        }
    }
    virtual ~Car() {}
};

/* Garage class w/ a ptr to Car */
class Garage
{
private:
    Car *car;

public:
    Garage()
    {
        /* Initializing Car upon construction */
        try
        {
            car = new Car();
        }
        catch (const char *)
        {
            /* Catching ERROR */
            throw;
        }
    }
    virtual ~Garage() {}
};

int main()
{
    /* Trying to create a Garage object */
    try
    {
        Garage gm;
    }
    catch (const char *str)
    {
        cerr << str << endl;
    }
    return 0;
}
