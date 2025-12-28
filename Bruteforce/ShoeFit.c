#include <stdio.h>
int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int left = 0, right = 0;
    if (a == 0 || b == 0 || c == 0)
    {
      left = 1;
    }
    if (a == 1 || b == 1 || c == 1)
    {
      right = 1;
    }
    if (left && right)
    {
      printf("1\n");
    }
    else
      printf("0\n");
  }

  return 0;
}