#include <stdio.h>
int main()
{
  int totalOfNCandies, candie;
  scanf("%d", &totalOfNCandies);
  for (int i = 0; i < totalOfNCandies; i++)
  {
    scanf("%d", &candie);
    if (candie % 3 == 0)
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