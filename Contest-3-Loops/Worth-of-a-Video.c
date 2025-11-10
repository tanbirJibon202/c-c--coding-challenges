#include <stdio.h>

int main()
{
  int n, total, duration;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &duration);
    total = 24000 * duration;
    printf("%d\n", total);
  }

  return 0;
}
