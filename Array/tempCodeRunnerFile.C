#include <stdio.h>
int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
      count += arr[i] % 2;
    }
    printf("%d ", count);
  }
  return 0;
}
