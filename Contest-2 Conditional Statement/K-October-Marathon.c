#include <stdio.h>
int main()
{
  int numberOfHours;
  scanf("%d", &numberOfHours);
  if (numberOfHours < 3)
  {
    printf("GOLD\n");
  }
  else if (numberOfHours >= 3 && numberOfHours < 6)
  {
    printf("SILVER\n");
  }
  else
  {
    printf("BRONZE\n");
  }

  return 0;
}