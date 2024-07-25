/*
CH-231-A
a3_p2.cpp
Amine Chahi
m.chahi@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include <cstdlib> 
#include <ctime>   

void generateCaseB(int length) {
    ofstream outFile("case_b.txt");

    // Write nums [1,length] into out/file
    for (int i = 1; i <= length; ++i) {
        outFile << i << " ";
    }

    outFile.close();
}
