#include <stdio.h>
int main()
{
  int year, mode;
  scanf("%d", &year);
  mode = year % 100;
  printf("k%02d\n", mode);
  return 0;
}