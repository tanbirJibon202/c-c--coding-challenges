#include <stdio.h>
int main()
{
  int outerloop, quotient, X, N;
  scanf("%d", &outerloop);
  for (int i = 0; i < outerloop; i++)
  {
    scanf("%d %d", &X, &N);
    quotient = N / 100;
    if (N % 100 != 0)
    {
      quotient = quotient + 1;
    }

    if (X >= quotient)
    {
      printf("0\n");
    }
    else
    {
      int extra = quotient - X;
      printf("%d\n", extra);
    }
  }
}