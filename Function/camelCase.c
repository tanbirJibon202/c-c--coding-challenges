#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
  char str[105];
  scanf("%s", str);
  int i;
  for (i = 0; str[i] != '\0'; i++)
  {
    if (isupper(str[i]))
    {
      break;
    }
  }
  printf("%d\n", i + 1);

  return 0;
}