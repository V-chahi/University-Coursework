/*
CH-230-A
a5_p8.c
Amine Chahi
m.chahi@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void scanM(int n, int m, int *array){
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m ; j++)
    {
      scanf("%d",array+i*m+j);
    }
}

void printM(int n, int m,int array[n][m]){
  for(int i = 0;i < n; i++){
    for(int j = 0; j < m; j++)
    {
      printf("%d ",array[i][j]);
    }
   printf("\n");
  }
}

void multi(int n, int m, int p,int v[n][m],int w[m][p], int x[n][p]){

  for(int i = 0; i < n; i++){
    for(int j = 0; j < p; j++){
      x[i][j] = 0;
    }
  }

 for(int i = 0; i < n; i++){
   for(int j = 0; j < p; j++){
     for(int k = 0; k < m; ++k){
       x[i][j] += v[i][k] * w[k][j];
     }
   }
 }
}

int main(){

int n,m,p;
scanf("%i", &n);
scanf("%i", &m);
scanf("%i", &p);

						//allocating memory for both the matrxs
int *ma[n];
  for(int i = 0; i < n; i++)
    ma[i]=(int *)malloc(m * sizeof(int));

int *mb[m];
  for(int i=0;i<m;i++)
    mb[i]=(int *)malloc(p * sizeof(int));

scanM(n,m, *ma);
scanM(m,p, *mb);

printf("Matrix A:\n");
printM(n,m,*ma);

printf("Matrix B:\n");
printM(m,p, *mb);

int *x[n];
  for(int i=0;i<n;i++)
    x[i]=(int *)malloc(p * sizeof(int));

multi(n, m, p, *ma,*mb, *x);
printf("The multiplication result AxB:\n");
printM(n,p, *x);

							//releasing memory
  for(int i = 0; i < n; i++)
    free(ma[i]);
 free(ma);
  for(int j = 0; i < m; j++)
    free(mb[i]);
free(mb);
  for(int i = 0; i < n; i++)
    free(x[i]);
free(x);
return 0;
}