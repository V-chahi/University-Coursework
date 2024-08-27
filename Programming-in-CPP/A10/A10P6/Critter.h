/*
CH-230-A
A10_P6.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <string> 


class Critter{

private:  
	std::string name;
	double hunger;
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
 							// service method
	void print();

						//Constructors
	Critter();
	Critter(std::string);
	Critter(std::string,int,int,double = 10);

	
	int getihunger();
	double getdhunger(int);
	
};