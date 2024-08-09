/*
CH-230-A
A10_P1.h
m.chahi@jacobs-university.de
*/

#ifndef _CRITTER_H_
#define _CRITTER_H_


#include <string> 


class Critter{

  private: 
	std::string name;
	int hunger;
	int boredom;
	double height;
    double weight;
    std::string color;


  public: 
						//setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setWeight(double newweight);
    void setColor(std::string& newcolor);

					//getter method
	int getHunger();
    float getWeight();
    float getColor();

	void print();
};

#endif