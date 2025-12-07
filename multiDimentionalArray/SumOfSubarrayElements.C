#include <stdio.h>
int main()
{
  int arr[101][101];
  int n, m;
  scanf("%d %d", &n, &m);
  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= m; col++)
    {
      scanf("%d", &arr[row][col]);
    }
  }
  int sum = 0;
  int r1, c1, r2, c2;
  scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
  for (int row = r1; row <= r2; row++)
  {
    for (int col = c1; col <= c2; col++)
    {
      sum += arr[row][col];
    }
  }
  printf("%d\n", sum);
  return 0;
}