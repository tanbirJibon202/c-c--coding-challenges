#include <stdio.h>

int main()
{
  int last_digit, count = 0, n;

  for (int i = 1;; i++)
  {
    last_digit = i % 10;

    if (last_digit != 3 && i % 3 != 0)
    {
      count++;
      printf("%d\n", i);
    }

    if (count == n)
    {
      break;
    }
  }

  return 0;
}
