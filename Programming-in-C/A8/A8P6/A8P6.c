/*
CH-230-A
A8_P6.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h> 

int main(){
    char a, b;

    FILE *in_file;
    FILE *out_file;

    in_file = fopen("chars.txt", "r");
    out_file = fopen("execsum.txt", "w");

    if(in_file == NULL || out_file == NULL){   
        printf("Error! Could not open file\n"); 
        exit(-1);
    } 

   						 //read characterss from chars.txt
    fscanf(in_file, "%c %c", &a, &b);

   					 //print sum of ASCII codes to results.txt
    fprintf(out_file, "%d", a+b);

    //close the files
    fclose(in_file);
    fclose(out_file);
    
    return 0;
}