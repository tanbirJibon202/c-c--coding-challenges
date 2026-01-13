#include <stdio.h>
int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    int n, k, mx = 0, ans = 0;
    scanf("%d%d", &n, &k);
    int arr[k];
    for (int i = 0; i < k; i++)
    {
      scanf("%d", &arr[i]);
      if (mx < arr[i])
      {
        mx = arr[i];
      }
      ans += arr[i] * 2 - 1;
    }
    ans -= mx * 2 - 1;
    printf("%d\n", ans);
  }

  return 0;
}