/*
CH-230-A
A9_P7.[cpp]
m.chahi@jacobs-university.de
*/

#include <iostream>
#include <cmath>

using namespace std;

int myfirst(int *arr){

    for (int i = 0; i < 5; i++)
    {
        if ((arr[i] > 0) && (arr[i] % 2) == 0)
        {
            return arr[i];        
        }

    }
    return -1;
    
}

double myfirst(double *arr)
{
    double temp;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < 0)
        {
    
            if (modf( arr[i], &temp) == 0)
            {
                return arr[i];      
            }
        }
     }
   return -1.1;
}
char myfirst (char *arr)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != 'a' || arr[i] != 'e'|| arr[i] != 'i'|| arr[i] != 'o'|| arr[i] != 'u')
        {
            return arr[i];
        }
    }
    return '0';
}

int main()
{                  		  //data type must be updated accordingly
    char arr[5];  			    
    for (int i = 0;i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"the value is "<<myfirst(arr)<<endl;
    return 0;
}