#include <stdio.h>
#include <string.h>
int main()
{
  // char latin[3][3];
  // for (int i = 0; i < 3; i++)
  // {
  //   scanf("%s", latin[i]);
  // }

  // char ans;
  // for (int i = 0; i < 3; i++)
  // {
  //   int A = 0, B = 0, C = 0;
  //   for (int j = 0; j < 3; j++)
  //   {
  //     if (latin[i][j] == 'A')
  //       A = 1;
  //     else if (latin[i][j] == 'B')
  //       B = 1;
  //     else if (latin[i][j] == 'C')
  //       C = 1;
  //   }
  //   if (A == 0)
  //   {
  //     ans = 'A';
  //     break;
  //   }
  //   else if (B == 0)
  //   {
  //     ans = 'B';
  //     break;
  //   }
  //   else if (C == 0)
  //   {
  //     ans = 'C';
  //     break;
  //   }
  // }
  // printf("%c\n", ans);

  // char latin[3][3];
  // for (int i = 0; i < 3; i++)
  // {
  //   scanf("%s", latin[i]);
  // }

  // char ans;
  // for (int j = 0; j < 3; j++)
  // {
  //   int A = 0, B = 0, C = 0;
  //   for (int i = 0; i < 3; i++)
  //   {
  //     if (latin[i][j] == 'A')
  //       A = 1;
  //     else if (latin[i][j] == 'B')
  //       B = 1;
  //     else if (latin[i][j] == 'C')
  //       C = 1;
  //   }
  //   if (A == 0)
  //   {
  //     ans = 'A';
  //     break;
  //   }
  //   else if (B == 0)
  //   {
  //     ans = 'B';
  //     break;
  //   }
  //   else if (C == 0)
  //   {
  //     ans = 'C';
  //     break;
  //   }
  // }
  // printf("%c\n", ans);

  char latin[3][3];
  for (int i = 0; i < 3; i++)
  {
    scanf("%s", latin[i]);
  }

  int A = 0, B = 0, C = 0;
  for (int j = 0; j < 3; j++)
  {

    for (int i = 0; i < 3; i++)
    {
      if (latin[i][j] == 'A')
        A++;
      else if (latin[i][j] == 'B')
        B++;
      else if (latin[i][j] == 'C')
        C++;
    }
  }

  if (A != 3)
  {
    printf("A");
  }
  else if (B != 3)
  {
    printf("B");
  }
  else if (C != 3)
  {
    printf("C");
  }
  return 0;
}