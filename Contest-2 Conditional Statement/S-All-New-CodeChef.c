#include <stdio.h>
int main()
{
  int X, Y;
  scanf("%d %d", &X, &Y);
  if (X > Y)
  {
    printf("New\n");
  }
  else if (Y > X)
  {
    printf("Old\n");
  }
  else
  {
    printf("Same\n");
  }
  return 0;
}