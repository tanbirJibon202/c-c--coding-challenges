#include <stdio.h>

int main()
{
  int test;
  scanf("%d", &test);

  while (test--)
  {
    char latin[3][4];

    for (int i = 0; i < 3; i++)
    {
      scanf("%s", latin[i]);
    }

    for (int j = 0; j < 3; j++)
    {
      int A = 0, B = 0, C = 0;

      for (int i = 0; i < 3; i++)
      {
        if (latin[i][j] == 'A')
          A++;
        else if (latin[i][j] == 'B')
          B++;
        else if (latin[i][j] == 'C')
          C++;
      }
      if (A == 0)
        printf("A\n");
      else if (B == 0)
        printf("B\n");
      else if (C == 0)
        printf("C\n");
    }
  }
  return 0;
}
