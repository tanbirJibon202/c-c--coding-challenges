#include <stdio.h>
int main()
{
  int a, b, sum;
  scanf("%d %d", &a, &b);
  sum = a + b + (a * b);
  if (sum <= 111)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }

  return 0;
}