/*
CH-230-A
A10_P2.c
m.chahi@jacobs-university.de
*/


#ifndef _CRITTER_H_
#define _CRITTER_H_

#include <string> 

class Critter{

private:  
	std::string name;
	double height;
	int boredom;
	int hunger;




public: 						// setter methods
	void setName(std::string& newname);
        void setHeight(double newheight);
	void setBoredom(int newboredom);
	void setHunger(int newhunger);

 
  

						// getter method
	std::string getname();
        double getHeight();

        int getBoredom();
        int getHunger();

					// service method
	void print();
};

#endif
