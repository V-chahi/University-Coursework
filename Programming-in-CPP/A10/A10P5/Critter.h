/*
CH-230-A
A10_P5.c
m.chahi@jacobs-university.de
*/


#include <string> 

class Critter{

private:  
	std::string name;
	int hunger;
	int boredom;
	double height;



public: 
							// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setHeight(double newheight);
  

						   // getter methods
	std::string getname();
	int getHunger();
    int getBoredom();
    double getHeight();
						// service methods
	void print();

	//Constructors
	Critter();
	Critter(std::string);
	Critter(std::string,int,int,double=10);
};