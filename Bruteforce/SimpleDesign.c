#include <stdio.h>
int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    int x, k;
    scanf("%d%d", &x, &k);
    for (int y = x;; y++)
    {
      int sum = 0;
      int value = y;
      while (value > 0)
      {
        sum = sum + value % 10;
        value = value / 10;
      }

      if (sum % k == 0)
      {
        printf("%d\n", y);
        break;
      }
    }
  }

  return 0;
}