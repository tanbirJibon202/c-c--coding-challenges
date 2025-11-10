#include <stdio.h>
#include <math.h>
int main()
{
  int N;
  scanf("%d", &N);
  if (N <= (pow(10, 3) - 1))
  {
    printf("%d", N);
  }
  else if (N >= pow(10, 3) && N <= (pow(10, 4) - 1))
  {
    printf("%d", (N / (int)pow(10, 1)) * 10);
  }
  else if (N >= pow(10, 4) && N <= (pow(10, 5) - 1))
  {
    printf("%d", (N / (int)pow(10, 2)) * 100);
  }
  else if (N >= pow(10, 5) && N <= (pow(10, 6) - 1))
  {
    printf("%d", (N / (int)pow(10, 3)) * 1000);
  }
  else if (N >= pow(10, 6) && N <= (pow(10, 7) - 1))
  {
    printf("%d", (N / (int)pow(10, 4)) * 10000);
  }
  else if (N >= pow(10, 7) && N <= (pow(10, 8) - 1))
  {
    printf("%d", (N / (int)pow(10, 5)) * 100000);
  }
  else if (N >= pow(10, 8) && N <= (pow(10, 9) - 1))
  {
    printf("%d", (N / (int)pow(10, 6)) * 1000000);
  }

  return 0;
}