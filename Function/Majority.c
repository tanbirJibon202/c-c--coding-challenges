#include <stdio.h>
#include <string.h>
char str[15];
int solve(int n)
{
  int temp = 0;
  for (int i = 0; i < n; i++)
  {
    scanf("%s", str);
    if (str[0] == 'F')
    {
      temp++;
    }
    else
    {
      temp--;
    }
  }
  return temp;
}
int main()
{
  int n;
  scanf("%d", &n);
  int count = solve(n);
  if (count > 0)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }

  return 0;
}