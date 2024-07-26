/*
CH-230-A
a3_p9.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[], int n)
{
    double s;
    s = v[2]+ v[5];
    if ( n>5)
        {return s;}
    else{
    return -111;
    }
}

int main() {
int n;
scanf("%d", &n);
double arr[20];

   for(int i = 0; i<n; i++){
        scanf("%lf", &arr[i]);
    }

double s= sum25(arr, n);

    if(n>5)
    {
    printf("sum=%lf",s);
    }
    else
    {
    printf("One or both positions are invalid\n");
    return -111;
    }

    printf("\n");
    return 0;
}