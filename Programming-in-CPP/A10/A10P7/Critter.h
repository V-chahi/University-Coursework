/*
CH-230-A
A8_P7.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <string> 

class Critter
{
private: 
 
 std::string name;
	double hunger;
	int boredom;
	double height;
	double thirst;



public: 

	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
        void setHeight(double newheight);
	void setThirst(double newthirst);

	
    std::string getname();
    int getHunger();
    int getBoredom();
    double getHeight(); 
    double getThirst();

	void print();

	Critter();
	Critter(std::string);
	Critter(std::string,int,int,double=10);
	Critter(std::string,int,int,double,double);

	
	int getihunger();
	double getdhunger(int);
	
};