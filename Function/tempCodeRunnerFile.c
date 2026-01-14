#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char str[1005];
  scanf("%s", str);
  int len = strlen(str);
  int count = 0;

  for (int i = 0; i < len; i++)
  {
    if (i % 2 == 0)
    {
      int temp = islower(str[i]);
      if (temp != 0)
      {
        count++;
      }
    }
    else
    {
      int temp = isupper(str[i]);
      if (temp != 0)
      {
        count++;
      }
    }
  }
  if (count == len)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }

  return 0;
}