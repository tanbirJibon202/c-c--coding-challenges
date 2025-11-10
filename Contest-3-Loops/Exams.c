#include <stdio.h>
int main()
{
  int n, x, y, z;
  float multiply, percentage;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d %d", &x, &y, &z);
    multiply = x * y;
    percentage = (z / multiply) * 100;
    if (percentage > 50)
    {
      printf("Yes\n");
    }
    else
    {
      printf("No\n");
    }
  }

  return 0;
}