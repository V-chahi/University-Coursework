/*
CH-230-A
a2_p5.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

int main(){
double sum=0;
char c;
int n;

printf("Select c :");
scanf("%c", &c);

printf("Select n :");
scanf("%d", &n);

double arr[100];
for(int i=0; i<n; i++ ){
    printf("enter temperature %d :", i+1);
    scanf("%lf", &arr[i]);
    getchar();
    }

switch (c) {
    case 's':
    for(int i=0; i<n; i++ )
            {
            sum =sum + arr[i];
            }
        printf("The sum of the temperature is %lf\n", sum);
        break;
    case 'p':
        for(int i=0; i<n; i++ )
            {
            printf("The temperature %d is :%lf Celsius.\n", i+1, arr[i]);
            }
        break;
    case 't':
        for(int i=0; i<n; i++ )
        {
            printf("The temperature %d is :%lf Fahrenheit.\n", i+1, (arr[i]*9/5)+32);
        }
        break;
    default:
        for(int i=0; i<n; i++ )
        {
            sum =sum + arr[i];
        }
        printf("The mean of the temperatures is %lf\n", sum/n);
        break;
        }
return 0;
}