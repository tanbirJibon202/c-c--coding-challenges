#include <stdio.h>
int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    int left[n], right[m];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &left[i]);
    }
    for (int i = 0; i < m; i++)
    {
      scanf("%d", &right[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (left[i] + right[j] <= k)
        {
          ans++;
        }
      }
    }
    printf("%d\n", ans);
  }

  return 0;
}