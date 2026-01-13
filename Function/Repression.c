#include <stdio.h>
int sum(int a, int b, int c)
{
  return a + b + c;
}
int min(int a, int b, int c)
{
  if (a < b && a < c)
  {
    return a;
  }
  else if (b < c)
  {
    return b;
  }
  else
  {
    return c;
  }
}
int main()
{
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  // printf("Minimum: %d\n", min(a, b, c));
  printf("%d\n", sum(a, b, c) - min(a, b, c));
  // printf("Sum: %d\n", sum(a, b, c));
  return 0;
}