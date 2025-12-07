#include <stdio.h>
int main()
{
  int arr[101][101];
  int n, m;
  scanf("%d %d", &n, &m);
  int value = 1;
  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= m; col++)
    {
      arr[row][col] = value;
      printf("%d ", arr[row][col]);
      value++;
    }
    printf("\n");
  }
  return 0;
}
