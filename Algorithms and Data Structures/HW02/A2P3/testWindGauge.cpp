/*
  CH-231-A
  A2_P3.cpp
  Amine Chahi
  m.chahi@constructor.university
*/

#include "WindGauge.h"
#include <iostream>

using namespace std;

int main(){
 WindGauge A;

 A.currentWindspeed(15);
 A.currentWindSpeed(16);
 A.currentWindSpeed(12);
 A.currentWindSpeed(15);
 A.currentWindSpeed(15);

 A.dump();
 cout<<endl;
    cout<<"Adding 10 more measurments"<<endl;
    
 A.currentWindSpeed(16);
 A.currentWindSpeed(17);
 A.currentWindSpeed(16);
 A.currentWindSpeed(16);
 A.currentWindSpeed(20);
 A.currentWindSpeed(17);
 A.currentWindSpeed(16);
 A.currentWindSpeed(15);
 A.currentWindSpeed(16);
 A.currentWindSpeed(20);

 A.dump();

    return 0;
}