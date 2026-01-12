#include <stdio.h>
int main()
{
  int test;
  char a[100010], b[100010];
  scanf("%d", &test);
  while (test--)
  {
    int n, c = -1;
    scanf("%d", &n);
    scanf("%s", &b);
    for (int i = 0; i < n; i++)
    {
      if (b[i] - '0' + 1 == c)
      {
        a[i] = '0';
      }
      else
      {
        a[i] = '1';
      }
      c = b[i] - '0' + a[i] - '0';
    }
    for (int i = 0; i < n; i++)
    {
      printf("%c", a[i]);
    }
    printf("\n");
  }

  return 0;
}