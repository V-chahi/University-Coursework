/*
  CH-231-A
  A2_P1.cpp
  Amine Chahi
  m.chahi@constructor.university
*/

#include <iostream>
#include <list>
#include <fstream>

using namespace std;

int main()
{
    list<int> A;
    list<int> B;                                                                         //01:

    int input;
    cin >> input;
    while (input > 0)                                                                //02:
    {
        B.push_front(input);                                                     //03:
        A.push_back(input);                                                    //04:
       
        cin >> input;
    }
    cout << endl;
    cout<<"Elements of List A"<<endl;                                   //05:
    list<int>::iterator itA;
    for (itA = A.begin(); itA != A.end(); itA++)
    {
        cout << *itA << " ";
    }
    cout << endl;

    ofstream out;
    out.open("listB.txt", ios::out);
    out<<"Elements of List B"<<endl;
    list<int>::iterator itB;
    for (itB = B.begin(); itB != B.end(); itB++)
    {
        out << *itB << " ";
    }
    cout << endl;                                                                           //06:
    
    int var1;                                                                        //07:
    var1 = A.front();
    A.pop_front();
    A.push_back(var1);

    B.splice(B.end(),B,B.begin());

    cout<<"List A with comma"<<endl;                                           //08:
    for (itA = A.begin(); *itA != A.back(); itA++)
    {
        cout << *itA <<",";
    }
    cout<<*itA<<endl;
    
    cout<<"List B with comma"<<endl;
    for (itB = B.begin(); *itB != B.back(); itB++)
    {
       cout << *itB <<",";
    }
    cout<<*itB<<endl;
     cout << endl;                                                 //09:


    A.merge(B);                                                  //10:
    A.sort();
    cout<<"Sorted lists A & B"<<endl;
    for (itA = A.begin(); itA != A.end(); itA++)
    {
        cout << *itA << " ";
    }
    cout << endl;
    return 0;
}
