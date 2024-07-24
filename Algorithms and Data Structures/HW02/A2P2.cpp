/*
  CH-231-A
  A2_P2.cpp
  Amine Chahi
  m.chahi@constructor.university
*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<float> A;                                                                             //01.
    float input;
    cin >> input;
    while (input != 0)                                                                       //02.
    {
        if (input > 0)                                                                     //03.
        {
            A.push_back(input);
        }
        else
        {
            A.push_front(input);
        }
        cin >> input;
    }

    deque<float>::iterator itA
    cout << "Elems of A seperated by spaces" << endl;                          //04.
    for (itA = A.begin(); itA != A.end(); itA++)
    {
        cout << *itA << " ";
    }
    cout << endl;
    cout << endl;                                                           //05.

    for (itA = A.begin(); itA != A.end(); itA++)                          //06.
    {
        if (*itA > 0)
        {
            A.insert(itA, 0);
            break;
        }
    }

    cout << "Elems of A seperated by semicolons" << endl;           //07.
    for (itA = A.begin(); *itA != A.back(); itA++)
    {
        cout << *itA << ";";
    }
    cout << *itA << endl;
    return 0;
}
