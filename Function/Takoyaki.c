#include <stdio.h>
#include <math.h>
int main()
{
  int n, x, t;
  scanf("%d%d%d", &n, &x, &t);
  float temp = n;
  int ans = ceill(temp / x);
  printf("%d", ans * t);
  return 0;
}