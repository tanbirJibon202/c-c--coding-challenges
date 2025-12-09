#include <stdio.h>
#include <string.h>

int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    char str[4];
    scanf("%s", str);

    int flag = 1;

    if (str[0] != 'y' && str[0] != 'Y')
      flag = 0;
    if (str[1] != 'e' && str[1] != 'E')
      flag = 0;
    if (str[2] != 's' && str[2] != 'S')
      flag = 0;

    if (flag == 1)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }

  return 0;
}
