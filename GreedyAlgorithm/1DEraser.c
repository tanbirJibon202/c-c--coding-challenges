#include <stdio.h>
int main()
{
  int test;
  scanf("%d", &test);
  char ch[200010];
  while (test--)
  {
    int n, k, ans = 0;
    scanf("%d %d", &n, &k);
    scanf("%s", ch);
    for (int i = 0; i < n;)
    {
      if (ch[i] == 'B')
      {
        ans++;
        i += k;
      }
      else
        i++;
    }
    printf("%d\n", ans);
  }

  return 0;
}