/*
  CH-231-A
  A2_P6.cpp
  Amine Chahi
  m.chahi@constructor.university
*/

#include <iostream>
#include <fstream>
#include <exception>
#include <map>

using namespace std;

int main()
{
    ifstream in;
    map<string, string> data;
    in.open("data.txt", ios::in);

    string name, birthday;
    while (!in.eof())
    {
        getline(in, name);
        getline(in, birthday);
        data[name] = birthday;
    }

    string input;
    cout << "Enter a Name:" << endl;
    getline(cin, input);

    map<string, string>::iterator it;
    it = data.find(input);

    if (it == data.end())
    {
        cout << "Name not found!" << endl;
    }
    else
    {
        cout << "Match found:"<<it->first << "->" << it->second << endl;
    }

return 0;
}