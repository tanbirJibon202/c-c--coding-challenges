#include <stdio.h>
#include <string.h>

int main()
{
  char given[10];
  scanf("%s", given);
  char str[7][4] = {
      "ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
  int ans = 0;
  for (int i = 0; i < 7; i++)
  {
    int temp = strcmp(given, str[i]);
    if (temp == 0)
    {
      ans = 1;
    }
  }

  if (ans)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }

  return 0;
}
