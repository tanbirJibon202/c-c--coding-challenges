#include <stdio.h>
int main()
{
  int x, y, total_food_cost;
  scanf("%d%d", &x, &y);
  total_food_cost = x + x + x + x + x + x + y;
  printf("%d", total_food_cost);
  return 0;
}