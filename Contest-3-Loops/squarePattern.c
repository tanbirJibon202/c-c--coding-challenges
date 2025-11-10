#include <stdio.h>
int main()
{
  // int n;
  // printf("Enter the size of the square pattern: ");
  // scanf("%d", &n);
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("%d ", j + 1);
  //   }
  //   printf("\n");
  // }

  // int n;
  // printf("Enter the size of the square pattern: ");
  // scanf("%d", &n);
  // for (int i = 0; i < n; i++)
  // {
  //   char ch = 'A';
  //   for (int j = 0; j < n; j++)
  //   {
  //     printf("%c ", ch);
  //     ch++;
  //   }
  //   printf("\n");
  // }

  //   int n;
  //   printf("Enter the size of the square pattern: ");
  //   scanf("%d", &n);
  //   int num = 1;
  //   for (int i = 0; i < n; i++)
  //   {

  //     for (int j = 0; j < n; j++)
  //     {
  //       printf("%d ", num);
  //       num++;
  //     }
  //     printf("\n");
  //   }
  //   printf("After pattern num is: %d\n", num);
  //   return 0;
  // }

  int n;

  printf("Enter the size of the square pattern: ");
  scanf("%d", &n);
  char ch = 'A';
  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n; j++)
    {
      printf("%c ", ch);
      ch++;
    }
    printf("\n");
  }
}