/*
CH-230-A
A7_P5.c
m.chahi@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>

										// Out/Arr  
void write(int a[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

									// Sorting Arr ascendingly
int compare_up ( const void * va , const void * vb ) {
    const int* a = ( const int *) va ;
    const int* b = ( const int *) vb ;
    if (* a < * b ) return -1;
    else if (* a > * b ) return 1;
    else return 0;
}

								// Sorting Arr descendingly
int compare_down ( const void * va , const void * vb ) {
    const int* a = ( const int *) va ;
    const int* b = ( const int *) vb ;
    if (* a > * b ) return -1;
    else if (* a < * b ) return 1;
    else return 0;
}

int main(){

    char c;
    int t, a[100];
    scanf("%d", &t);


    for(int i = 0; i < t; i++)
        scanf("%d", &a[i]);
    
    while(1){
        getchar();
        scanf("%c", &c);

        					// Determining which func to apply 
        if(c == 'a'){
            qsort (a, t, sizeof(a[0]), compare_up);
            write(a, t);
        }
        else if (c == 'd'){
            qsort (a, t, sizeof(a[0]), compare_down);
            write(a, t);
        }
        else if (c == 'e')
            exit(1);
    }

    return 0;
}