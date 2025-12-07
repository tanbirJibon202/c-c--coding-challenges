#include <stdio.h>
int main()
{
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  if (num1 == 1 && num2 == 2)
    printf("Yes\n");
  else if (num1 == 2 && num2 == 3)
    printf("Yes\n");
  else if (num1 == 4 && num2 == 5)
    printf("Yes\n");
  else if (num1 == 5 && num2 == 6)
    printf("Yes\n");
  else if (num1 == 7 && num2 == 8)
    printf("Yes\n");
  else if (num1 == 8 && num2 == 9)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}