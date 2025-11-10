#include <stdio.h>
int main()
{
  int n, theNumberOfRequiredDonations, theNumberOfCollectedDonations, moreDonationsToReachTheTarget;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &theNumberOfRequiredDonations, &theNumberOfCollectedDonations);
    moreDonationsToReachTheTarget = theNumberOfRequiredDonations - theNumberOfCollectedDonations;
    printf("%d\n", moreDonationsToReachTheTarget);
  }

  return 0;
}