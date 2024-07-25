#include <iostream>
#include <fstream>
#include <cstdlib> 
#include <ctime>   

void generateCaseB(int length) {
    ofstream outFile("case_b.txt");

    // Write numbers from 1 to length into the output file
    for (int i = 1; i <= length; ++i) {
        outFile << i << " ";
    }

    outFile.close();
}
