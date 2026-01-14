#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
  char str[105];
  scanf("%s", str);
  int len = strlen(str);
  // printf("%d\n", len);
  for (int i = 0; i < len; i++)
  {
    str[i] = toupper(str[i]);
  }
  printf("%s\n", str);

  return 0;
}