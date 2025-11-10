#include <stdio.h>
int main()
{
  int N;
  scanf("%d", &N);
  if (N <= 8 && N >= 6)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }

  return 0;
}