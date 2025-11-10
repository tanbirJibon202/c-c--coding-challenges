#include <stdio.h>
int main()
{
  int theNumberOfDonuts, calorieCountOfEachOne, total;
  scanf("%d %d", &theNumberOfDonuts, &calorieCountOfEachOne);
  total = theNumberOfDonuts * calorieCountOfEachOne;
  printf("%d", total);
  return 0;
}