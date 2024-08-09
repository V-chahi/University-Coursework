/*
CH-230-A
A10_P3.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include "City.h"
#include <iostream>

int main(){

    City bremen, casablanca, valad ;
    bremen.setname("Bremen");
    casablanca.setname("Casablanca");
    valad.setname("Valad");
    
    casablanca.setpop(686969);
    bremen.setinhab(111);
    valad.setinhab(222);
  
    
    bremen.setarea(212.2);
    casablanca.setarea(32.3);
    valad.setarea(11.3);

  
    bremen.setmayor("Patron");
    casablanca.setmayor("Gauss");
    valad.setmayor("Fourier");

    bremen.print();
    casablanca.print();
    valad.print();

   return 0;
}
