#include <stdio.h>
#include <string.h>
int main()
{
  char name[20];
  scanf("%s", name);
  int len = strlen(name);
  int sum = 0;
  for (int i = 0; i < len; i++)
  {
    sum += name[i] - '0';
  }

  printf("%d\n", sum);
  return 0;
}