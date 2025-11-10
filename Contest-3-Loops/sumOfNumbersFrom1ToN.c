#include <stdio.h>
int main()
{
  int n, sum, i;
  printf("Enter your number: ");
  scanf("%d", &n);
  sum = 0;
  for (i = 1; i <= n; i++)
  {
    sum += i;
  }
  printf("Sum = %d\n", sum);
  return 0;
}