#include <stdio.h>
int main()
{
  int arr[101][101];
  int n;
  scanf("%d", &n);

  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= n; col++)
    {
      scanf("%d", &arr[row][col]);
    }
  }

  // primary diagonal
  int prow = 1, pcol = 1, psum = 0;
  for (int d = 0; d <= n - 1; d++)
  {
    psum += arr[prow][pcol];
    prow++;
    pcol++;
  }
  // secondary diagonal
  int srow = n, scol = 1, ssum = 0;
  for (int d = 0; d <= n - 1; d++)
  {
    ssum += arr[srow][scol];
    srow--;
    scol++;
  }

  int ans = psum - ssum;
  if (ans < 0)
  {
    ans *= -1;
  }
  printf("%d\n", ans);

  return 0;
}