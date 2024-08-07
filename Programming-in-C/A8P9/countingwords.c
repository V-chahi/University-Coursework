/*
CH-230-A
A8_P9.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <stdbool.h>

int main(){

    char ch1, ch2, fn[50];
    bool ok = false;
    int count = 0;

    FILE *in_file;

    fgets(fn, sizeof(fn), stdin);
    fn[strlen(fn)-1] = '\0';

    in_file = fopen(fn, "r");
    if (!in_file){   
        printf("Error! Could not open file\n"); 
        exit(-1);
    }

    while(fscanf(in_file,"%c", &ch1) != EOF && ok == false){
        if((ch1 >=65 && ch1 <= 92) || (ch1>=95 && ch1 <= 122))
            ok = true;
    }

    fscanf(in_file,"%c", &ch1);

    while(fscanf(in_file,"%c", &ch2) != EOF){
        if(ch1 == ' ' || ch1 == ',' || ch1 == '?' || ch1 == '!' ||
           ch1 == '.' || ch1 == '\t' || ch1 == '\r' || ch1 == '\n'){
                if((ch2 >=65 && ch2 <= 92) || (ch2>=95 && ch2 <= 122)){
                    count++;
                }
        }
        ch1 = ch2;
    }
    if(ok)
        count++;

    printf("The file contains %d words.\n", count);
 return 0;
}