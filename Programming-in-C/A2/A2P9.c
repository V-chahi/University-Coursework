/*
CH-230-A
a2_p9.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>

int main() {
char str;

scanf("%c", &str);
getchar();

if((int) str <58 && (int )str >47){
    printf("%s is a digit\n", str);
}
else if(((int) str <91 && (int) str >64) || ((int) str <123 && (int) str >96))
{
    printf("%s is a letter\n", str);
}
else{
   printf("%s is some other symbol\n", str);
}
return 0;
}