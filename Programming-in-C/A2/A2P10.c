/*
CH-230-A
a2_p10.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    printf("1 day = 24 hours\n");
    int i=2;
        while(i<=n){
        printf("%d days = %d hours\n", i, i*24);
        i++;
    }
    return 0;
}