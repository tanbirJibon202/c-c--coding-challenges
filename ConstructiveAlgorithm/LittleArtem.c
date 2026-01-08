#include <stdio.h>
int main()
{
  int test;
  scanf("%d", &test);

  while (test--)
  {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int row = 1; row <= n; row++)
    {
      for (int col = 1; col <= m; col++)
      {
        if (row == 1 && col == 1)
          printf("W");
        else
          printf("B");
      }
      printf("\n");
    }
  }
  return 0;
}
