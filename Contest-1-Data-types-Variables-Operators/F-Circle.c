#include <stdio.h>
#include <math.h>
int main()
{
  const double PI_CONST = 3.14159265358979323846;
  double radius;
  double area, circumference;
  scanf("%lf", &radius);
  area = PI_CONST * radius * radius;
  circumference = 2 * PI_CONST * radius;
  printf("%lf %lf\n", area, circumference);
  return 0;
}