#include <stdio.h>
int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    int n;
    scanf("%d", &n);
    char grid[n][4];
    for (int i = 0; i < n; i++)
    {
      scanf("%s", grid[i]);
    }
    for (int row = n - 1; row >= 0; row--)
    {
      for (int col = 0; col < 4; col++)
      {
        if (grid[row][col] == '#')
        {
          printf("%d ", col + 1);
        }
      }
    }
    printf("\n");
  }

  return 0;
}