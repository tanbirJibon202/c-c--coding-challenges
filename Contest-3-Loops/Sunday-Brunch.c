#include <stdio.h>
int main()
{
  int n, x, y, z;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &x, &y);

    z = x / y;
    if (z > 20)
    {
      z = 20;
    }

    printf("%d\n", z);
  }

  return 0;
}