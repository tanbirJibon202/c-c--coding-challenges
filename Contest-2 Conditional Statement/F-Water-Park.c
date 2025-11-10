#include <stdio.h>
int main()
{
  int Weight, Height;
  scanf("%d%d", &Weight, &Height);
  if (Weight >= 60 && Height <= 130)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }
  return 0;
}