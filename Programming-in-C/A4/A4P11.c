/*
CH-230-A
a4_p11.[c]
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count_insensitive(char *str, char c){
int d = 0;
char m;

  for(int i = 0; i < strlen(str); i++){
    if(str[i] >= 'A' && str[i] <= 'Z'){
      if (str[i] == c)
                d = d + 1;
      else{
                m = tolower(str[i]);
      if (m == c)
                d = d + 1;
      }
    }

    else if(str[i] >= 'a' && str[i] <= 'z'){
      if (str[i] == c)
                d=d+1;
      else{
                m = toupper(str[i]);
      if (m == c)
                d = d + 1;
      }
    }
    else if( str[i] == c )
            d = d + 1;

  }
return d;
}

int main() {

    char *str=malloc(50*sizeof(char));

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    printf("choose a character:");

    char c;
    scanf("%c", &c);
    getchar();

    char *str2=malloc((strlen(str))*sizeof(char));
    strcpy(str2,str);
    free(str);

    printf("\nThe character '%c' occurs %d times.\n",c, count_insensitive(str2,c));
    printf("\nThe character 'b' occurs %d times.\n", count_insensitive(str2,'b'));
    printf("The character 'h' occurs %d times.\n", count_insensitive(str2,'h'));
    printf("The character '8' occurs %d times.\n", count_insensitive(str2,'8'));
    printf("The character 'u' occurs %d times.\n", count_insensitive(str2,'u'));
    printf("The character '$' occurs %d times.\n", count_insensitive(str2,'$'));

    free(str2);

return 0;
}