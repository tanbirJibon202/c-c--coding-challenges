#include <stdio.h>
int main()
{
  int num, a, b, c, result;
  scanf("%d", &num);
  a = num / 100;
  // printf("%d\n", a);
  b = (num / 10) % 10;
  // printf("%d\n", b);
  c = num % 10;
  // printf("%d", c);
  result = 111 * (a + b + c);
  printf("%d", result);
  return 0;
}