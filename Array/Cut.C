#include <stdio.h>
int main()
{
  // int n;
  // scanf("%d", &n);
  // int arr[n + 1];
  // for (int i = 1; i < n + 1; i++)
  // {
  //   scanf("%d", &arr[i]);
  // }
  // for (int i = 0; i < n + 1; i++)
  // {
  //   printf("%d ", arr[i]);
  // }

  int n, K, index;
  scanf("%d %d", &n, &K);
  int arr[n + 1];
  for (int i = 1; i < n + 1; i++)
  {
    scanf("%d", &arr[i]);
  }
  index = n - K + 1;
  for (int i = index; i < n + 1; i++)
  {
    printf("%d ", arr[i]);
  }

  for (int i = 1; i < index; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\n");

  return 0;
}