#include <stdio.h>
int main()
{
  int n;
  long long sum2 = 0;
  long long sum1 = 0;
  scanf("%d", &n);
  int b[n - 1];
  for (int i = 0; i < n - 1; i++)
  {
    scanf("%d", &b[i]);
  }
  for (int i = 1; i <= n; i++)
  {
    sum1 = sum1 + i;
  }
  for (int i = 0; i < n - 1; i++)
  {
    sum2 = sum2 + b[i];
  }

  printf("%d", sum1 - sum2);

  return 0;
}