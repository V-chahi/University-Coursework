/*
CH-230-A
A9_P3.[cpp]
m.chahi@jacobs-university.de
*/

#include <iostream>

int abs(float x){
    if(x < 0)
        return -x;

    else 
        return x;
}

int main(){

    float x;
    std::cin>>x;

  				//Output absolute value of given input
    std::cout<<abs(x)<<'\n';
    return 0;
}