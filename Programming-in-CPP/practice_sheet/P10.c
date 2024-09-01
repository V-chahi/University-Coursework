
#include <stdio.h>
#include <stdlib.h>

void print_matrix(int **A, int rows, int cols) {

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
}

int main() {

  FILE *f1 = fopen("matrix.txt", "r");
  if (f1 == NULL) {
    printf("Error opening file");
  }

  FILE *f2 = fopen("matrixwritten.txt", "wb+");
  if (f2 == NULL) {
    printf("error opening file");
    exit(1);
  }

  int i, j;
  int rows, cols, pos1, pos2, value;

  fscanf(f1, "%d%d", &rows, &cols);

  int **A = malloc(sizeof(int *) * rows);

  for (i = 0; i < rows; i++) {
    A[i] = malloc(sizeof(int *) * cols);
  }

  for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
      A[i][j] = 0;
    }
  }

  while (!feof(f1)) {
    size_t size = fscanf(f1, "%d%d%d", &pos1, &pos2, &value);
    A[pos1 - 1][pos2 - 1] = value;
  }

  char *str = "\n";
  fwrite(&A, sizeof(int), rows * cols, f2);
  fwrite(str, sizeof(char), 1, ab);

  while (!feof(ab)) {
    fread(A, sizeof(int), rows * cols, f2);
  }

  for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
      printf("%d", A[i][j]);
    }
    printf("\n"); 
  }

  print_matrix(A, rows, cols);

  for (i = 0; i < rows; i++) {

    free(A[i]);
  }free(A);

  printf("Casablanca\n");
  
  fclose(f1);

  printf("Casablanca\n");

  return 0;
}
