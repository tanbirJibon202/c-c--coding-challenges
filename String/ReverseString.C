#include <stdio.h>
#include <string.h>

int main()
{
  char str[20];
  scanf("%s", &str);

  int len = strlen(str);
  int i = 0, j = len - 1;
  // while (i < j)
  // {
  //   printf("i = %d, j = %d\n", i, j);
  //   printf("Before Swap: %c %c\n", str[i], str[j]);
  //   int temp = str[i];
  //   str[i] = str[j];
  //   str[j] = temp;
  //   i++;
  //   j--;
  // }
  for (i = 0, j = len - 1; i < j; i++, j--)
  {
    printf("i = %d, j = %d\n", i, j);
    printf("Before Swap: %c %c\n", str[i], str[j]);
    int temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
  printf("%s\n", str);
  return 0;
}