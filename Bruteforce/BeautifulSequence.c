#include <stdio.h>
#include <stdbool.h>
int main()
{
  int test, m, value;
  scanf("%d", &test);
  while (test--)
  {
    scanf("%d", &m);
    bool isBeautiful = false;
    for (int index = 1; index <= m; index++)
    {
      scanf("%d", &value);
      if (value <= index)
      {
        isBeautiful = true;
      }
    }
    if (isBeautiful)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }

  return 0;
}