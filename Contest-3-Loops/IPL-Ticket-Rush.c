#include <stdio.h>
#include <stdlib.h>
int main()
{
  int numberOfStudents, totalNumberOfTickets, n, difference;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &numberOfStudents, &totalNumberOfTickets);
    if (totalNumberOfTickets > numberOfStudents)
    {
      difference = 0;
      printf("%d\n", difference);
    }
    else
    {
      difference = abs(numberOfStudents - totalNumberOfTickets);
      printf("%d\n", difference);
    }
  }
  return 0;
}
