/*
CH-230-A
a13 p2.[cpp]
Amine Chahi
m.chahi@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

int main(int argc, char **argv)
{                                        //opening the files using streams
    ifstream f1;
    ifstream f2;
    ofstream f3;

    f1.open("in1.txt", ios::in); //file in1.txt is opened as input
    f2.open("in2.txt", ios::in); //file in2.txt is opened as input
    f3.open("output.txt", ios::out); //file output.txt is opened as output

//casting complex nums from input files as complex nums
    Complex c1, c2;
    f1 >> c1;
    f2 >> c2;

//declaring sum, diff&prod of inputs
    Complex sum;
    Complex diff;
    Complex prod;

//calculating sum, diff&prod of inputs
    sum = c1 + c2;
    diff = c1 - c2;
    prod = c1 * c2;

//printing output in the output.txt file
    f3 << sum << endl;
    f3 << diff << endl;
    f3 << prod << endl;

//printing output in the terminal
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;
    cout << "WELL DONE!! Output has been printed in the file!!! " << endl;

//closing the files
    f1.close();
    f2.close();
    f3.close();

    return 0;
}
