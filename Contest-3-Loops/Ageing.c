#include <stdio.h>
int main()
{
  int n, chefAge, chefinaAge;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &chefAge);
    chefinaAge = chefAge - 10;
    printf("%d\n", chefinaAge);
  }

  return 0;
}