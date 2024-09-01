#include <stdio.h>
#include <stdlib.h>

int main() {

  char c;
  char arr[10], arr1[10];
  scanf("%c", &c);
  char nl = '\n';

  FILE *f1;
  f1 = fopen("generate.txt", "wb");
  if (!f1) {
    printf("Unsuccessful file open");
    exit(1);
  }

  for (int i = 0; i < 10; i++) {
    arr[i] = c + i; 
    fwrite(&arr[i], 1, 1, f1);
    fwrite(" ", 1, 1, f1);
    fwrite(&arr[i], 1, 1, f1);
    fwrite(&arr[i], 1, 1, f1);
    fwrite("\n", 1, 1, f1);
  }

  fclose(f1);

  FILE *f2;
  f2 = fopen("generate.txt", "rb");
  if (!f2) {
    printf("Unsuccessful file open");
    exit(1);
  }

  while (!feof(f2)) {
    fread(&arr1, 1, 1, f2); 
    printf("%c", *arr1);
  }

  fclose(f2);

  return 0;
}
