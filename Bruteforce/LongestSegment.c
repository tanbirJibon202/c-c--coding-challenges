#include <stdio.h>
#include <math.h>
int main()
{
  int n;
  scanf("%d", &n);
  int x[n], y[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &x[i], &y[i]);
  }
  double ans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int dx = x[i] - x[j];
      int dy = y[i] - y[j];
      double dis = sqrt(dx * dx + dy * dy);
      if (dis > ans)
      {
        ans = dis;
      }
    }
  }

  printf("%lf\n", ans);

  return 0;
}