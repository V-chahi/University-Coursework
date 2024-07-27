/*
CH-230-A
a5_p5.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <stdio.h>
#include<stdlib.h>

double scalar_product(int n, double v[n], double w[n]){
double s = 0.0;

  for(int i = 0; i < n; i++)
    s += (double) v[i] * w[i];

return s;
}

double smallest(double v[], int n){

double s = v[0];
int j = 0;

  for(int i = 0; i < n; i++){
    if(s > v[i]){
        s = v[i];
        j = i;
    }
  }

printf("The smallest element = %lf\n", s);
printf("Position of smallest element = %i\n", j);

}

void largest(double v[], int n){

double l = v[0];
int j = 0;

  for(int i = 0; i < n; i++){
    if( l < v[i] ){
      l = v[i];
      j = i;
    }
  }

printf("The largest element = %lf\n", l);
printf("Position of largest element = %i\n", j);

}

int main(){

int n;
scanf("%d", &n);

double *v=malloc(n*sizeof(double));
double *w=malloc(n*sizeof(double));

  for(int i = 0; i < n; i++){
    scanf("%lf", &v[i]);
  }
  for(int i=0; i<n; i++){
    scanf("%lf", &w[i]);
  }

printf("Scalar product = %lf\n", scalar_product(n,v,w));

smallest(v,n);
largest(v,n);

smallest(w,n);
largest(w,n);

free(v);
free(w);

return 0;
}