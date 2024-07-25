#include <iostream>
#include <fstream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

void generateCaseA(int length) {
    ofstream outFile("case_a.txt");
    int arr[length];

    // Generate an array with numbers from 1 to length
    for (int i = 0; i < length; ++i) {
        arr[i] = i + 1;
    }

    // Randomly shuffle the array
    for (int i = length - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        swap(arr[i], arr[j]);
    }

    // Move the largest element to the beginning
    swap(arr[0], arr[length - 1]);

    // Write the array to the output file
    for (int i = 0; i < length; ++i) {
        outFile << arr[i] << " ";
    }

    outFile.close();
}
