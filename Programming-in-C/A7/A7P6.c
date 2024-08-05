/*
CH-230-A
A7_P6.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct person {
    char name[30];
    int age;
};

int swap_age(struct person x, struct person y){
    if(x.age > y.age)
        return 1;
    if(x.age == y.age){ 
        if(strcmp(x.name,y.name) > 0)
            return 1;
    }
    return 0;
}


int swap_name(struct person x, struct person y){

    if(strcmp(x.name,y.name) > 0)
        return 1;

   if(strcmp(x.name,y.name) == 0)  
        if(x.age > y.age)
            return 1;

    if(strcmp(x.name,y.name) < 0) 
        return 0;
 
 return 0;
}

void bubble_sort(struct person a[], int n, int f()){
    
 int i;
 bool swapped = true;
 struct person per;
   
     while(swapped){
      swapped = false;

        for(i = 1; i < n; i++){

            if(f(a[i-1], a[i])){
                swapped = true;

                per = a[i-1];
                a[i-1] = a[i];
                a[i] = per;
            }
        }
     }
}

int main(){

 int n,i;
 scanf("%d ", &n);

 struct person a[n];
    
    for(i = 0; i < n; i++){

        fgets(a[i].name, sizeof(a[i].name),stdin);
        a[i].name[strlen(a[i].name)-1] = '\0';

        scanf("%d", &a[i].age);
        getchar();
    }  


    bubble_sort(a,n,swap_name);


    for(i = 0; i < n; i++){
        printf("{%s, %d}; ", a[i].name, a[i].age);
    }  
    printf("\n");


    bubble_sort(a,n,swap_age);

    for(i = 0; i < n; i++){
        printf("{%s, %d}; ", a[i].name, a[i].age);
    }  
    printf("\n");
 return 0;
}