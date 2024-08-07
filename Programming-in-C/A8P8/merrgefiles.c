/*
CH-230-A
A8_P8.c
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(){
    char *f1, *f2 ,ch;

    int length1 = 0, length2 = 0, size1 = 50, size2 = 50;

    f1 = (char *) malloc ( sizeof(char) * size1 );
    f2 = (char *) malloc ( sizeof(char) * size2 );

    FILE *in_file1;
    FILE *in_file2;
    FILE *out_file;

    in_file1 = fopen("text1.txt", "r");
    in_file2 = fopen("text2.txt", "r");
    out_file = fopen("merge12.txt", "w");

    if (in_file1 == NULL || in_file2 == NULL || out_file == NULL){   
        printf("Error! Could not open fileS\n"); 
        exit(-1);
    }

    while(fscanf(in_file1,"%c", &ch) != EOF){

        if(length1 >= size1){
            size1* = 2;
            f1 = (char *) realloc (f1, size1 * sizeof(char));
        }
        f1[length1] = ch;

        length1++;
    }

    fprintf(out_file, "%s", f1);

    while(fscanf(in_file2,"%c", &ch) != EOF){
        if(length2 >= size2){

            size2* = 2;
            f2 = (char *) realloc (f2, size2 * sizeof(char));
        }
        f2[length2] = ch;

        length2++;
    }

    fprintf(out_file, "\n%s", f2);

    fclose(in_file1);
    fclose(in_file2);
    fclose(out_file);

    return 0;
}
