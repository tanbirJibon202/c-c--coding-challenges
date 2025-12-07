#include <stdio.h>
#include <string.h>
int main()
{
  // char num[101];
  // scanf("%s", num);
  // int len = strlen(num);
  // int lastDigit = num[len - 1] - '0';
  // if (lastDigit % 2 == 0)
  // {
  //   printf("Yes\n");
  // }
  // else
  // {
  //   printf("No\n");
  // }
  char line[100];
  gets(line);
  int len = strlen(line);
  int spaces = 0;
  for (int i = 0; i < len; i++)
  {
    if (line[i] == ' ' && line[i + 1] != ' ')
    {
      spaces++;
    }
  }
  printf("%d\n", spaces + 1);

  return 0;
}