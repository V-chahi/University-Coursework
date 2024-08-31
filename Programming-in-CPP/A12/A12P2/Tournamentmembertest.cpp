/*
CH-230-A
A12_P2.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>

using namespace std;

int main()
{
    TournamentMember Prot1("Zakaria","Zerouali","1949-03-23","Raja Casablanca",49);
    TournamentMember Prot2("Marie","Janne","4202-04-20","SV Werder Bremen",99);

    Prot1.print(); Prot2.print();

    Prot1.clocation("Venus");

    Prot1.print(); Prot2.print();
}
