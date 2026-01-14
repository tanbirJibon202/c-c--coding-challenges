#include <stdio.h>
#include <string.h>
int main()
{
  char *words[] = {
      "and", "not", "that", "the", "you"};
  int n, ans = 0;
  scanf("%d", &n);
  char given[55];
  while (n--)
  {
    scanf("%s", given);
    for (int i = 0; i < 5; i++)
    {
      int temp = strcmp(given, words[i]);
      if (temp == 0)
      {
        ans = 1;
      }
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