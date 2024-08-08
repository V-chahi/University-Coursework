/*
CH-230-A
A9_P4.[cpp]
m.chahi@jacobs-university.de
*/

#include <iostream>
#include <string>

int my_count(int a, int b){
    return b-a;
}

int my_count(char c, std::string s){
    long unsigned i;
    int cnt = 0;
    for(i = 0; i < s.length(); i++){
        if(s[i] == c)
            cnt++;
    }

    return cnt;
}

int main(){

    std::cout<<"Calling my_count(7,3) returns: "<<my_count(7,3)<<std::endl;

    std::cout<<"Calling my_count(’i’,""this is a string"") returns: "
    <<my_count('i', "this is a string")<<std::endl;

    return 0;
}