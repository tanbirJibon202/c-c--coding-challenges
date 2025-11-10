#include <stdio.h>
int main()
{

  int chefeEarned, chefinaEarned, n, difference;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &chefeEarned, &chefinaEarned);
    difference = chefinaEarned - chefeEarned;
    printf("%d\n", difference);
  }

  return 0;
}