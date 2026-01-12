#include <stdio.h>
int main()
{
  int n, ans = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    int x;
    scanf("%d", &x);
    if (x < 0)
    {
      ans += -x;
    }
    else
      ans = ans + x;
  }
  printf("%d\n", ans);

  return 0;
}