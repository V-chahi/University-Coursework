/*
  CH-231-A
  A2_P3.cpp
  Amine Chahi
  m.chahi@constructor.university
*/

#include <iostream>
#include <numeric> 
#include "WindGauge.h"

using namespace std;

WindGauge::WindGauge(int period)
{
    this->period = period;
}

void WindGauge::currentWindspeed(int speed)
{
    if (this->WG.size() >= this->period)
    {
        this->WG.pop_back();
    }
    this->WG.push_front(speed);
}
int WindGauge::highest() const
{
    return *max_element(this->WG.begin(),this->WG.end());
}

int WindGauge::lowest() const
{
    return *min_element(this->WG.begin(),this->WG.end());
}

float WindGauge::average() const
{
    float sum= accumulate(this->WG.begin(),this->WG.end(),0);
    return (sum/this->WG.size());
}

void WindGauge::dump()
{
    cout<<"Highest windspeed:"<<this->highest()<<endl;
    cout<<"Lowest windspeed:"<<this->lowest()<<endl;
    cout<<"Average windspeed:"<<this->average()<<endl;
    
}



