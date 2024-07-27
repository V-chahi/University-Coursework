/*
CH-230-A
a5_p9.c
Amine Chahi
m.chahi@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

int rows, cols, depth;                    		 //Prompt user to enter values        scanf("%d %d %d", &rows, &cols, &depth);	
                                                 	 //3D arr with given rows, columns, depth
int ***test;
mtrx = (int ***)malloc(sizeof(int **) * rows);

  for (int i = 0; i < rows; ++i){
    mtrx[I] = (int **)malloc(sizeof(int *) * cols);
      for (int j = 0; j < cols; ++j){
        mtrx[I][j] = (int *)malloc(sizeof(int) * depth);
            for (int k = 0; k < depth; ++k){
              scanf("%d", (mtrx[I][j]+k));
            }
      }
  }

    for (int i = 0; i < depth; ++i)
    {
      printf("Section %d:\n", i + 1);
        for (int j = 0; j < rows; ++j)
        {
          for (int k = 0; k < cols; ++k)
          {
                printf("%d  ", *(*(*(mtrx+j)+k)+i));
          }
            printf("\n");
        }
    }

    

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            free(mtrx[I][j]);
        }
    }

    free(mtrx);
    mtrx = 0;
    return 0;
}