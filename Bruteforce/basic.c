#include <stdio.h>
int main()
{
  // for (int i = 0000; i <= 9999; i++)
  // {
  //   printf("%.4d\n", i);
  // }

  //

  // int n, x;
  // scanf("%d %d", &n, &x);
  // int answer = 0;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i + 1; j < n; j++)
  //   {
  //     printf("%d %d\n", i, j);
  //     if (i + j == x)
  //     {
  //       answer++;
  //     }
  //   }
  // }

  // printf("%d\n", answer);

  // int n, x;
  // scanf("%d %d", &n, &x);
  // int answer = 0;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i + 1 ; j < n; j++)
  //   {
  //     printf("%d %d\n", i, j);
  //     if (i + j == x)
  //     {
  //       answer++;
  //     }
  //   }
  // }

  // printf("%d\n", answer);

  int n, x;
  scanf("%d %d", &n, &x);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int answer = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      printf("%d %d\n", i, j);
      if (arr[i] + arr[j] == x)
      {
        answer++;
      }
    }
  }

  printf("%d\n", answer);

  return 0;
}