#include <stdio.h>

int main()
{
  int input;
  scanf("%d", &input);

  int ans = 1;

  for (int i = 2; i <= 10; i++)
  {
    if (input % i == 0)
    {
      ans = i;
    }
  }

  printf("%d\n", ans);

  return 0;
}
