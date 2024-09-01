/*
CH-230-A
A12_P3.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <cstring>
#include <string>

std::string TournamentMember::location = "Albasete";


	//empty constructor
TournamentMember::TournamentMember() {
    strcpy(fname, "default first name");
    strcpy(lname, "default last name");
    strcpy(dob, "1999-03-23");
    strcpy(role, "team_plyr");
    rank = 99;
}

					//Parametric Constructor
TournamentMember::TournamentMember(char f[], char l[], char d[], char r[], 
  int ra) {
    strcpy(fname, f);
    strcpy(lname, l);
    strcpy(dob, d);
    strcpy(role, r);
    rank = ra;
}

				//Copy Constructor
TournamentMember::TournamentMember(const TournamentMember& src) {

    strcpy(fname, src.fname);
    strcpy(lname, src.lname);
    strcpy(dob, src.dob);
    strcpy(role, src.role);
    rank = src.rank;
}

			//Destructor
TournamentMember::~TournamentMember(){
    std::cout<<"Tournament Member Destructor is being called."<<std::endl;
}

			//Print Method
void TournamentMember::print() const {
    std::cout<<"Player: "<<fname<<" "<<lname<<"\n date of birth:  "<<dob<<
    "\n position: "<<role<<"\n Location: "<<location<<"\n Rank: "<<rank<<std::endl;
}

			//Player Constructor
Player::Player(char fn[], char ln[], char d[], char r[], int ra, int num, 
                char pos[], int g, char f[]) : TournamentMember(fn, 
                ln, d, r, ra) {
        std::cout<<"Player parameter constructor was called."<<std::endl;
        number = num;
        strcpy(position, pos);
        goals = g;
        strcpy(foot, f);
} 

			//Empty Constructor
Player::Player() : TournamentMember() {

    number = 0;
    strcpy(position, "default position");
    goals = 0;
    strcpy(foot, "right-foot");
}          

//copy constructor
Player::Player(const Player& src) : TournamentMember(src) {
    number = src.number;
    strcpy(position, src.position);
    goals = src.goals;
    strcpy(foot, src.foot);
}             

//destructor
Player::~Player() {
}    

void Player::incGoals() {
    goals++;
}

//print method
void Player::printPlayer() const {
    std::cout<<"Player number: "<<number<<"\n Position: "<<
    position<<" Player score: "<<goals<<" goals\n Prefered Leg: "<<foot<<
    "\n Location: "<<getLocation()<<" <<std::endl;
}
