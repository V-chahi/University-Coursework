/*
CH-231-A
a1_p4.cpp
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <iostream>
#include<cstring>
#include <vector>

using namespace std;

int main()
{
    vector<string> input;
    string data;
    bool temp = true;
    while (temp == true)
    {                                                              //reading&storing strs from keybrd until str=END
        cin >> data;
        if (data == "END")
        {
            temp = false;
        }
        else
        {
            input.push_back(data);
        }
    }
    for (int i = 0; i < input.size(); i++)                     //printing input using idx
    {
        cout << input[i] << " ";
    }
    cout << endl;
    vector<string>::iterator iterinput = input.begin();      //printing input using iterator
    for (int i = 0; i < (input.size() - 1); i++)
    {
        cout << *iterinput << ",";
        iterinput++;
    }
    cout << *iterinput << endl;
}
