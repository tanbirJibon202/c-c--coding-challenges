#include <stdio.h>
int main()
{
  int n, degrees;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &degrees);
    if (degrees > 24)
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