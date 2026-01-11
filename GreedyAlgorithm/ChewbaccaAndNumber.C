#include <stdio.h>
#include <string.h>
int main()
{
  char number[10];
  scanf("%s", number);
  for (int i = 0; number[i] != '\0'; i++)
  {
    if (number[i] >= '5' && number[i] <= '9')
    {
      if (i == 0 && number[i] == '9')
      {
        continue;
      }
      int digit = number[i] - '0';
      int complement = 9 - digit;
      number[i] = complement + '0';
    }
  }
  printf("%s\n", number);
  return 0;
}