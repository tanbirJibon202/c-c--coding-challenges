#include <stdio.h>
int main()
{

  int n, m;
  scanf("%d%d", &n, &m);
  int arr[n][m];
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < m; col++)
    {
      scanf("%d", &arr[row][col]);
    }
  }

  for (int col = 0; col < m; col++)
  {
    for (int row = 0; row < n; row++)
    {
      printf("%d ", arr[row][col]);
    }
    printf("\n");
  }

  return 0;
}