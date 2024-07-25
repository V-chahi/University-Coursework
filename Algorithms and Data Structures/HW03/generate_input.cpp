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

using namespace std;

void generateRandomInput(int length) {
    ofstream outFile("input.txt");
    srand(time(NULL)); 

    for (int i = 0; i < length; ++i) {
        outFile << rand() % (2 * length) << " "; // Generate random ints [0, 2*length)
    }

    outFile.close();
}

int main() {
    int n;
    cout << "Enter the length of the random input sequence: ";
    cin >> n;

    generateRandomInput(n);
    cout << "Random input sequence of length " << n << " generated successfully." << endl;

    return 0;
}
void generateCaseA(int length) {
    ofstream outFile("case_a.txt");
    int arr[length];

    // Generate array [1,length]
    for (int i = 0; i < length; ++i) {
        arr[i] = i + 1;
    }

    // Randomly shuffle array
    for (int i = length - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        swap(arr[i], arr[j]);
    }

    // Move the largest element to the beginning
    swap(arr[0], arr[length - 1]);

    // Write array to the output file
    for (int i = 0; i < length; ++i) {
        outFile << arr[i] << " ";
    }

    outFile.close();
}
void generateCaseB(int length) {
    ofstream outFile("case_b.txt");

    // Write nums 1 to length into the output file
    for (int i = 1; i <= length; ++i) {
        outFile << i << " ";
    }

    outFile.close();
}
