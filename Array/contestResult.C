#include <stdio.h>
int main()
{
  int points[101];
  int n, m;
  scanf("%d", &n, &m);
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &points[i]);
  }

  int x, score = 0;
  for (int i = 1; i <= m; i++)
  {
    scanf("%d", &x);
    score += points[x];
  }
  printf("%d\n", score);
}