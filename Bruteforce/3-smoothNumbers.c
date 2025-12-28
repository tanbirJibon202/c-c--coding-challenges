#include <stdio.h>
int main()
{
  long long N;

  scanf("%lld", &N);
  for (;;)
  {
    if (N % 2 == 0)
    {
      N = N / 2;
    }
    else
      break;
  }

  for (;;)
  {
    if (N % 3 == 0)
    {
      N = N / 3;
    }
    else
      break;
  }

  if (N == 1)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }
  return 0;
}