/*
CH-230-A
A12_P2.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream> 

int main(){

    char fn1[] = "Ziko", ln1[] = "Zerouali", dob1[] = "1999-99-99", 
    role1[] = "captain", pos1[] = "centre", foot1[] = "right-footed";
    Player p1(fn1, ln1, dob1, role1, 12, 08, pos1, 420, foot1);

			//parametric 2nd
    char fn2[] = "Marie", ln2[] = "Jaene", dob2[] = "1420-12-34", 
    role2[] = "player", pos2[] = "High", foot2[] = "left-footed";
    Player p2(fn2, ln2, dob2, role2, 2, 23, pos2, 370, foot2);

    //parametric 3rd player
    char fn3[] = "John", ln3[] = "Wick", dob3[] = "1983-12-30", 
    role3[] = "president", pos3[] = "forward", foot3[] = "right-footed";
    Player p3(fn3, ln3, dob3, role3, 3, 30, pos3, 600, foot3);


    p1.printPlayer();
    p2.printPlayer();
    p3.printPlayer();

    std::string l = "Casablanca";
    p1.setLocation(l);


    p1.incGoals();

    p1.printPlayer();
    p2.printPlayer();
    p3.printPlayer();    

    return 0;
}