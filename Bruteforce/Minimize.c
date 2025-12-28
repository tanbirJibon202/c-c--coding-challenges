#include <stdio.h>

int min(int x, int y)
{
  return (x < y) ? x : y;
}

int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    int result = 100;
    for (int c = a; c <= b; c++)
    {
      int newResult = (c - a) + (b - c);
      // result = (result < newResult) ? result : newResult;
      result = min(result, newResult);
    }
    printf("%d\n", result);
  }

  return 0;
}
