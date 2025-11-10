#include <stdio.h>
int main()
{
  int Dhoni, Rohit, Kohli;
  scanf("%d%d%d", &Dhoni, &Rohit, &Kohli);
  if (Dhoni > Rohit && Dhoni > Kohli)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }

  return 0;
}