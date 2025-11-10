#include <stdio.h>
int main()
{
  int responseCode;
  scanf("%d", &responseCode);
  if (responseCode == 404)
  {
    printf("Not Found\n");
  }
  else
  {
    printf("Found\n");
  }
  return 0;
}