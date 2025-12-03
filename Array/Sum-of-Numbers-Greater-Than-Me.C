#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int arr[n + 1];
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 1; i <= n; i++)
  {
    int sum = 0;

    for (int j = 1; j <= n; j++)
    {
      if (arr[j] > arr[i])
      {
        sum += arr[j];
      }
    }

    printf("%d ", sum);
  }

  return 0;
}
