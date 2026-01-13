#include <stdio.h>
int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }
    while (k--)
    {
      for (int i = 0; i < n; i++)
      {
        if (arr[i])
        {
          arr[i]--;
          arr[n - 1]++;
          break;
        }
      }
    }
    for (int i = 0; i < n; i++)
    {
      printf("%d ", arr[i]);
    }
    printf("\n");
  }

  return 0;
}