#include <stdio.h>
int max(int arr[], int n)
{
  int mx = 0;
  for (int i = 1; i < n; i++)
  {
    if (mx < arr[i])
    {
      mx = arr[i];
    }
  }
  return mx;
}
int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int temp = max(arr, n);
  int ans = temp + 1 - arr[0];
  if (ans < 0)
  {
    ans = 0;
  }
  printf("%d", ans);
  return 0;
}