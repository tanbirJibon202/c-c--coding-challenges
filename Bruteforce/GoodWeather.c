#include <stdio.h>
int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    int sunnyDay = 0, rainyDay = 0;
    int day;
    for (int i = 0; i < 7; i++)
    {
      scanf("%d", &day);
      if (day == 1)
      {
        sunnyDay++;
      }
      else
      {
        rainyDay++;
      }
    }
    if (sunnyDay > rainyDay)
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