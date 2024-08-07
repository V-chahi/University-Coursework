/*
CH-230-A
A8_P7.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(){

    double x,y;
    char f1[100], f2[100];

    FILE *in_file1;
    FILE *in_file2;
    FILE *out_file;

    fgets(f1,sizeof(f1), stdin);
    f1[strlen(f1)-1] = '\0';

    fgets(f2,sizeof(f2), stdin);
    f2[strlen(f2)-1] = '\0';

    in_file1 = fopen(f1, "r");
    in_file2 = fopen(f2, "r");
    out_file = fopen("results.txt", "w");

    if(in_file1 == NULL || in_file2 == NULL || out_file == NULL){   
        printf("Error! Could not open file\n"); 
        exit(-1);
    } 

    fscanf(in_file1, "%lf", &x);
    fscanf(in_file2, "%lf", &y);

    fprintf(out_file, "Sum = %lf\n", x+y);
    fprintf(out_file, "Difference = %lf\n", x-y);
    fprintf(out_file, "Product = %lf\n", x*y);
    fprintf(out_file, "Division = %lf\n", x/y);

    fclose(in_file1);
    fclose(in_file2);
    fclose(out_file);
    
    return 0;
}