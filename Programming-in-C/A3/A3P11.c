/*
CH-230-A
a2_p11.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/
#include <string.h>
#include <stdio.h>

int main(){
char one[40], two[40];

gets(one);
gets(two);

int str_1,str_2;
str_1= strlen(one);
str_2= strlen(two);

printf("length1=%d\nlength2=%d\n", str_1, str_2);

char co[40];
strcpy(co, one);
strcat(co, two);

printf("Concatenation=%s\n",co);

char copy[40];

strcpy(copy, two);

printf("Copy=%s\n", copy);

int i = 0;
	while (one[i] == two[i] && one[i] != '\0'){i ++;}

 if (one[i] > two[i])
    printf ("one is larger than two");
else if (one[i] < two[i])
    printf("one is smaller than two");
else
    printf ("one is equal to two");printf("\n");

char c;
scanf("%c", &c);
getchar();

 for(int i=0; i<strlen(two); i++){
  if (two[i]==c){
    printf("position=%d", i);
 break;
}
  if (i==strlen(two)-1){
    printf("The character is not in the string");}

}
printf("\n");
return 0;
}