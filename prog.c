#include <stdio.h>
#include <math.h>

int main(void) {
  float num;
  scanf("%f", &num);
  printf("%.3f", num*num*sqrt(3)/4);
  return 0;
}
