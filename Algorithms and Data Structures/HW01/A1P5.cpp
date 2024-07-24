/*
CH-231-A
a1_p5.cpp
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
    bool value = true;
    while(value == true)                                                //reading strs from keyboard until str=END
    {
        getline(cin, data);
        if (data == "END")
        {
            value = false;
        }
        else
        {
            input.push_back(data);                                        //storing input strings
        }
    }
    if (input.size() >= 5)
    {                                                               //Swaping elements
        string temp = input[2];
        input[2] = input[5];
        input[5] = temp;
    }
    else
    {
        cout << "SWAPING ERROR" << endl;
    }
    
    input.back()="???";                                         //Replacing Last elem
    
    for (int i = 0; i < (input.size()-1); i++)                //printing inputs using idx
    {
        cout << input[i] << ",";
    }
    cout << input[i] << endl;
    
    vector<string>::iterator iterinput = input.begin();   //printing using iterator
    for (int i = 0; i < (input.size()-1); i++)
    {
        cout << *iterinput << ";";
        iterinput++;
    }
    cout << *iterinput << endl;
                                                    //printing reverse using iterator
    for (iterinput = input.end() -1; iterinput >= input.begin(); iterinput--)
    {
        cout << *iterinput << " ";
    }
    cout<<endl;
    
}
