#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  printf("L");
  for (int i = 0; i < num; i++)
  {
    printf("o");
  }
  printf("ng\n");

  return 0;
}