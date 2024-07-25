#include <iostream>
#include <fstream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

void generateCaseB(int length) {
    ofstream outFile("case_b.txt");

    // Write numbers from 1 to length into the output file
    for (int i = 1; i <= length; ++i) {
        outFile << i << " ";
    }

    outFile.close();
}
