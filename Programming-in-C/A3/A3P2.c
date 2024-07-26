/*
CH-230-A
a3_p2.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

int main(){
char ch;

scanf("%c", &ch);
getchar();

int n;
scanf("%d", &n);

for(int i = 0; i<=n; i++)
{
    printf("%c\n", ch-i);
}

return 0;
}