#include <stdio.h>
int main()
{
  int AQIChefMeasured;
  scanf("%d", &AQIChefMeasured);
  if (AQIChefMeasured < 100)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  return 0;
}