#include <stdio.h>
int main()
{
  int year, lastTwoDigits;
  scanf("%d", &year);
  lastTwoDigits = year % 100;
  printf("K%02d", lastTwoDigits);
  return 0;
}