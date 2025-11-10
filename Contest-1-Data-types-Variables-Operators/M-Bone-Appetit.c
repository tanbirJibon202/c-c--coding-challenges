#include <stdio.h>
int main()
{
  int N, M, X, Y, total_treats;
  scanf("%d%d%d%d", &N, &M, &X, &Y);
  total_treats = N * X + M * Y;
  printf("%d", total_treats);
  return 0;
}