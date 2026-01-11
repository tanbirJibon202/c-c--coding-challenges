#include <stdio.h>
int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }
    int x = 0;
    for (int i = 0; i < n; i++)
    {
      x = x + 1;
      if (x == arr[i])
        x = x + 1;
    }
    printf("%d\n", x);
  }

  return 0;
}