#include <stdio.h>
int main()
{
  int nuggets, star_pieces, total;
  scanf("%d%d", &nuggets, &star_pieces);
  total = nuggets * 5000 + star_pieces * 9800;
  printf("%d", total);
  return 0;
}