#include <stdio.h>
int main()
{
  int R1, R2, rating1, rating2, D1, D2;
  scanf("%d%d%d%d", &R1, &R2, &rating1, &rating2);
  D1 = R1 + rating1;
  D2 = R2 + rating2;
  if (D1 > D2)
  {
    printf("Dominater\n");
  }
  else
  {
    printf("Everule\n");
  }

  return 0;
}