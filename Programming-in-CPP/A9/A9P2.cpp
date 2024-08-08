/*
CH-230-A
A9_P2.[cpp]
m.chahi@jacobs-university.de
*/

#include <iostream>

int main(){

    int n;
    double x;
    std::string s;

   						//read input var
    std::cin>>n>>x>>s;

    					     //prints x and s separated
    					    //":" n times
    for(int i = 1; i <=n; i++)
        std::cout<<s<<":"<<x<<'\n';

    return 0;
}