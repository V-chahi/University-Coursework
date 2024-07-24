/*
  CH-231-A
  A2_P4.cpp
  Amine Chahi
  m.chahi@constructor.university
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> temp;
    for (int i = 1; i < 31; i++)
    {
        temp.push_back(i);
    }
    temp.push_back(5);
    reverse(temp.begin(), temp.end());
    vector<int>::iterator it;
    for (it = temp.begin(); it != temp.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    replace(temp.begin(), temp.end(), 5, 129);
    for (it = temp.begin(); it != temp.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}