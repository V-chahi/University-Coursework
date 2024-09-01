/*
CH-230-A
a13 p3.[cpp]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

int main(){
    
    int n;
    cout << "Enter a value for n: " << endl;
    cin >> n;
    cout << "Enter the name of n files: " << endl;
    string s;                                                   //String where to store the value of input files
    string output;
    ofstream out_f;
    out_f.open("concatn.txt", ios::binary);

                                                             //for loop takes the filenames of n input files
    for (int i = 0; i < n; i++)
    {
        string filetoopen;
        ifstream in_f;
        cin >> filetoopen;
        in_f.open(filetoopen, ios::binary);

        while (!in_f.eof())                             //concatenating input files
        {
            getline(in_f, s);
            output = output + s + '\n';
        }
                                                     // closing all input files
        in_f.close();

    }
    cout << "Well Done!!! you have concatenated" <<n<< "files."<< endl;
    out_f << output;
    out_f.close();

return 0;
}
