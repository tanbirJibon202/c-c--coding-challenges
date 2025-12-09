#include <stdio.h>
#include <string.h>
int main()
{
  char str1[1000], str2[1000];
  scanf("%s %s", str1, str2);
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  int frq1[26] = {0};
  int frq2[26] = {0};
  for (int i = 0; i < len1; i++)
  {
    int index = str1[i] - 'a';
    frq1[index]++;
  }
  for (int i = 0; i < len2; i++)
  {
    int index = str2[i] - 'a';
    frq2[index]++;
  }

  int prb = 0;
  for (int i = 0; i < 26; i++)
  {
    if (frq1[i] != frq2[i])
    {
      prb = 1;
      break;
    }
  }
  printf("%s\n", prb ? "No" : "Yes");
  return 0;
}