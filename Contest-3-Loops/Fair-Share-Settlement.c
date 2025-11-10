#include <stdio.h>
int main()
{
  int a, b, c, n, d;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &a, &b);
    if (b == 1)
    {
      c = a / 2;
      d = a - c;
      printf("%d\n", d);
    }
    else
    {
      c = a / (b + 1);
      d = a - c * b;
      printf("%d\n", d);
    }
  }

  return 0;
}