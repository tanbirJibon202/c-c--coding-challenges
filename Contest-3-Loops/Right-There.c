#include <stdio.h>
int main()
{
  int n, theTotalNumberOfPeople, theCapacityOfThePartyHall;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &theTotalNumberOfPeople, &theCapacityOfThePartyHall);
    if (theTotalNumberOfPeople <= theCapacityOfThePartyHall)
    {
      printf("Yes\n");
    }
    else
    {
      printf("No\n");
    }
  }

  return 0;
}