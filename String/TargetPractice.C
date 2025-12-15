#include <stdio.h>
#include <string.h>
int main()
{
  char grid[10][10];
  for (int i = 0; i < 10; i++)
  {
    scanf("%s", grid[i]);
  }
  int ans = 0;
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (grid[i][j] == 'X')
      {
        int v1 = j + 1;
        int v2 = 10 - j;
        int v3 = i + 1;
        int v4 = 10 - i;
        int mini = v1;
        if (v2 < mini)
        {
          mini = v2;
        }
        if (v3 < mini)
        {
          mini = v3;
        }
        if (v4 < mini)
        {
          mini = v4;
        }
        ans += mini;
      }
    }
  }
  printf("%d", ans);
  return 0;
}