#include <stdio.h>
int main()
{
  int length, breadth, area, perimeter;
  scanf("%d%d", &length, &breadth);
  area = length * breadth;
  perimeter = 2 * (length + breadth);
  printf("%d %d\n", area, perimeter);
  return 0;
}
