#include <stdio.h>
int main()
{
  int n, assignments, minutes, days, totalAssignmentsTime;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d %d", &assignments, &minutes, &days);
    int x = days * 1440;
    totalAssignmentsTime = assignments * minutes;
    if (x >= totalAssignmentsTime)
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