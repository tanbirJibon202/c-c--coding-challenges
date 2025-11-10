#include <stdio.h>
#include <math.h>
int main()
{
  int base, exponent, power;
  scanf("%d %d", &base, &exponent);
  power = pow(base, exponent);
  printf("%d", power);
}