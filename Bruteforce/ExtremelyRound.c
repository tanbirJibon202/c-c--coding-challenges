#include <stdio.h>
#include <stdbool.h>
int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    int n;
    scanf("%d", &n);
    int ans = 0;
    for (int firstDigit = 1; firstDigit <= 9; firstDigit++)
    {
      int num = firstDigit;
      while (num <= n)
      {
        ans++;
        num = num * 10;
      }
    }
    printf("%d\n", ans);
  }

  return 0;
}