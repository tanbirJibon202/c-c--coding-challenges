#include <stdio.h>
int main()
{

  int n;
  scanf("%d", &n);
  int arr[n * 7 + 1], sum = 0;

  for (int i = 1; i <= n * 7; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 1; i <= n * 7; i++)
  {
    sum = sum + arr[i];
    if (i % 7 == 0)
    {
      printf("%d ", sum);
      sum = 0;
    }
  }
  printf("\n");

  return 0;
}