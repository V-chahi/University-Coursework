/*
CH-230-A
A9_P9.[cpp]
m.chahi@jacobs-university.de
*/

#include <iostream>

using namespace std;

void subtract_max(int *a,int n){

    int temp;

    for (int i = 0; i < n; i++){
        if (temp < a[i]){

            temp = a[i];
        }   
    }

    for (int i = 0; i < n; i++){
        a[i] = a[i] - temp;
    }    
}

void deallocate(int *a){
    delete []a;
}

int main(){

    int n;
    cin>>n;
    int *a;
    a = new int[n];
    if (a == nullptr)
    {
        cout << "Error! Memory allocation unsuccessful";
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    subtract_max(a,n);
    cout<<"New array is "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}