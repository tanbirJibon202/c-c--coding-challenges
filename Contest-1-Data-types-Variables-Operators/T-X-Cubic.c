#include <stdio.h>
#include <math.h>
int main()
{
  int x, cube;
  scanf("%d", &x);
  cube = pow(x, 3);
  printf("%d\n", cube);
  return 0;
}