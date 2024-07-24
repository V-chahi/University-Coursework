/*
  CH-231-A
  A2_P5.cpp
  Amine Chahi
  m.chahi@constructor.university
*/

#include <iostream>
#include <stdlib.h>
#include <set>

using namespace std;

int main()
{
    set<int> Lotto;
    srand ( static_cast <unsigned int> (time(0)));
    srand (time(NULL) );
    int random;
    
    while (Lotto.size() <= 6)
    {
        random = rand() % 49 + 1;
        Lotto.insert(random);
    }

    set<int>::iterator idx;
    for (idx = Lotto.begin(); idx != Lotto.end(); idx++)
    {
        cout << *idx << " ";
    }
    cout << endl;
    return 0;
}