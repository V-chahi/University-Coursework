
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct river {
  char name[40];
  int length;
  int drainage_area;
}RIVER;

int compare_lenght(const void *a, const void *b) {
  const RIVER *a1 = (const Rivers *)a;
  const RIVER *b1 = (const Rivers *)b;

  return (a1->length - b1->length);
  if (a1->length < b1->length) {
    return 1;
  } 
  else if (a1->length > b1->length) {
    return -1;
  } 
  else {
    return 0;
  }
}

int main() {
  FILE *fp = fopen("data.txt", "r");
  if (fp == NULL) {
    printf("ERROR Opening File");
    exit(1);
  }
  FILE *fr = fopen("data2.txt", "w");
  if (fr== NULL) {
    printf("Error Opening File");
    exit(1);
  }

  Rivers data2[30];
  int count = 0;
  while (1) {
    size_t size= fread(data2[i]-,sizeof(Rivers),sizeof(data2),fp);
    fscanf(fp, "%s", data2[count].name);

    if (feof(fp))
      break;
    fscanf(fp, "%d", &data2[count].length);
    fscanf(fp, "%d", &data2[count].drainage_area);

    fwrite(&data2,sizeof(Rivers),size,fr);
    count++;
  }
  qsort(data2, count, sizeof(Rivers), compare_lenght); // not ok

  for (int i = 0; i < count; i++) {
    fprintf(fr, "%s", data2[i].name);
    fprintf(fr, "%c", ' ');
    fprintf(fr, "%d", data2[i].length);
    fprintf(fr, "%c", ' ');
    fprintf(fr, "%d", data2[i].drainage_area);
    fprintf(fr, "%c", ' ');
    fprintf(fr, "%c", '\n');
  }

  fclose(fp);
  fclose(l);

  return 0;
}
