#include <stdio.h>
int main()
{
  int n, m, cnt = 0;
  scanf("%d %d", &n, &m);
  char str[11];
  for (int row = 1; row <= n; row++)
  {
    scanf("%s", str);
    for (int col = 0; col < m; col++)
    {
      if (str[col] == '#')
      {
        cnt++;
      }
    }
  }
  printf("%d\n", cnt);
  return 0;
}