#include <stdio.h>
int main()
{
  int x, n;
  scanf("%d %d", &x, &n);
  int arr[n][n];
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n; col++)
    {
      scanf("%d", &arr[row][col]);
    }
  }

  for (int col = 0; col < n; col++)
  {
    int flag = 0;
    for (int row = 0; row < n; row++)
    {
      if (arr[row][col] == x)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 1)
      printf("Yes\n");
    else
      printf("No\n");
  }

  return 0;
}