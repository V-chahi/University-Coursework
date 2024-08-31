/*
CH-230-A
A12_P2.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>

using namespace std;

string TournamentMember::location= "Alcaraz";


TournamentMember::TournamentMember(const char nfname[36],const char nlname[36],const char ndob[36],const string ntname,const int nage)
{
    cout<<"Parametric constructor called"<<endl;
    strcpy(fname, nfname);
    strcpy(lname, nlname);
    strcpy(dob, ndob);
    teamname = ntname;
    age = nage;
}

void TournamentMember::print() const{

    cout<<"First Name: "<<fname<<endl;
    cout<<"Last Name: "<<lname<<endl;
    cout<<"Date of Birth: "<<dob<<endl;
    cout<<"Team name: "<<tname<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Location: "<<location<<endl;
    cout<<endl;
}

void TournamentMember::clocation(const string nlocation)
{
    location = nlocation;
}
