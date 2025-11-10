#include <stdio.h>
int main()
{
  // int n;
  // scanf("%d", &n);
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     printf("* ");
  //   }
  //   printf("\n");
  // }

  // return 0;

  // int n;
  // scanf("%d", &n);
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     printf("%d", i + 1);
  //   }
  //   printf("\n");
  // }

  // int n;
  // char ch = 'A';
  // scanf("%d", &n);
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     printf("%c", ch);
  //   }
  //   printf("\n");
  //   ch++;
  // }

  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      printf("%d ", j + 1);
    }
    printf("\n");
  }

  return 0;
}