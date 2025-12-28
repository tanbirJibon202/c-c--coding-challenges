#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
  int test;
  scanf("%d", &test);
  while (test--)
  {
    char str[4];
    scanf("%s", str);
    if (strcmp(str, "bca") == false)
    {
      printf("NO\n");
    }
    else if (strcmp(str, "cab") == false)
    {
      printf("NO\n");
    }
    else
    {
      printf("YES\n");
    }
  }

  return 0;
}