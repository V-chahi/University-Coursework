
#include<stdlib.h>
#include <stdio.h>

void total_time(int mins[], int secs[], int n, int *sum_min, int *sum_sec) {

  int i;
  int sum = 0;
  int sums = 0;
  for (i = 0; i < n; i++) {
    sum += mins[i];
  }
  sum_min = &sum;
  for (i = 0; i < 3; i++) {
    *sum_sec += secs[i]; 
  }

  if (*sum_sec >= 60) {
    *sum_min += *sum_sec / 60;
    *sum_sec %= 60;
  }

  printf("In minutes %d\n", *sum_min);
  printf("In seconds %d\n", *sum_sec);
}
int main() {

  int mins[3] = {2, 3, 4};
  int secs[3] = {67, 89, 54};
  int sum_min = 0;
  int sum_sec = 0;

  total_time(mins, secs, 3, &sum_min, &sum_sec);

  return 0;
}
