#include <stdio.h>

int main() {

  double a; float b; int c;

  scanf("%lf", &a);

  scanf("%f", &b);

  scanf("%d", &c);

  double result = a * b * c;    		   //FORECASTING DATA TYPE
  printf("%lf\n", result);

  double *r_ptr = &result;
  *r_ptr += 5;  				//BY REFERENCE

  printf("%lf\n", result);
  printf("%lf\n", *r_ptr);

return 0;
}
