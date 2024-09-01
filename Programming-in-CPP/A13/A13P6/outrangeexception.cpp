/*
CH-230-A
a13 p6.[cpp]
Amine Chahi
m.chahi@jacobs-university.de
*/
#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{                                               //Initializing vector of Ints 0 <= i <= 19)
    vector<int> v(20, 8);
                                               //Trying access element at a specific idx catching out_of_range
    try
    {
                                             //Trying to access element at the index 21
        v.at(21);
                                            //Catching out_of_range exception
    }
    catch (const std::out_of_range &e){
                                              //Printing ERROR 
        std::cerr << e.what() << '\n';
    }

    return 0;
}
