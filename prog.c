#include <stdio.h>
#include <math.h>

int main(void) {
  float num;
  scanf("%f", &num);
  printf("%.3f", num^2*sqrt(3)/4);
  return 0;
}
