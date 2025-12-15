#include <stdio.h>
#include <string.h>
int main()
{
  char grid[8][8];
  for (int i = 0; i < 8; i++)
  {
    scanf("%s", grid[i]);
  }
  int x, y;
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (grid[i][j] == '*')
      {
        x = i;
        y = j;
      }
    }
  }
  // printf("%c%d\n", 'a'+y, x + 1);
  printf("%c%d\n", 'a' + y, 8 - x);
  return 0;
}