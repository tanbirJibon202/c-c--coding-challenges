#include <stdio.h>
int main()
{
  int MessiAssists, MessiGoals, RonaldoAssists, RonaldoGoals;
  scanf("%d %d %d %d", &MessiGoals, &MessiAssists, &RonaldoGoals, &RonaldoAssists);
  int MessiPoints = MessiGoals * 2 + MessiAssists;
  int RonaldoPoints = RonaldoGoals * 2 + RonaldoAssists;
  if (MessiPoints > RonaldoPoints)
  {
    printf("Messi\n");
  }
  else if (RonaldoPoints > MessiPoints)
  {
    printf("Ronaldo\n");
  }
  else
  {
    printf("Equal\n");
  }
  return 0;
}