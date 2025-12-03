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

  int vector[101], answer[101];
  for (int i = 1; i <= m; i++)
  {
    scanf("%d", &vector[i]);
  }

  for (int row = 1; row <= n; row++)
  {
    int result = 0;
    for (int i = 1; i <= m; i++)
    {
      result += arr[row][i] * vector[i];
    }
    answer[row] = result;
  }

  for (int row = 1; row <= n; row++)
  {
    printf("%d ", answer[row]);
  }
  printf("\n");
  return 0;
}