#include <stdio.h>
int main()
{
  int Total_amount, laddu, laddu_costs, Remaining_money, Quotient;
  scanf("%d%d", &Total_amount, &laddu);
  laddu_costs = laddu * 10;
  Remaining_money = Total_amount - laddu_costs;
  Quotient = Remaining_money / 20;
  printf("%d", Quotient);
  return 0;
}