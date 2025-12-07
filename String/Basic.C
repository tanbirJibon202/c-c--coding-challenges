#include <stdio.h>
#include <string.h>
int main()
{
  // char name[5];
  // char name[7];
  // for (int i = 0; i < 5; i++)
  // {
  //   scanf("%s", &name);
  //   printf("%s\n", name);
  // }

  // scanf("%s", name);
  // printf("%s\n", name);
  // printf("%d\n", (int)name[5]);
  // printf("%d\n", strlen(name));

  // char name[20];
  // gets(name);
  // printf("%s\n", name);

  // int n;
  // scanf("%d", &n);
  // char name[n];
  // getchar();
  // gets(name);
  // printf("%s\n", name);

  // int n;
  // scanf("%d", &n);
  // char name[n];
  // getchar();
  // gets(name);
  // printf("%s\n", name);

  char name[20];
  scanf("%s", name);

  // strupr(name);
  // strlwr(name);

  int len = strlen(name);
  for (int i = 0; i < len; i++)
  {
    if (name[i] >= 'a' && name[i] <= 'z')
    {
      name[i] = name[i] - 32;
    }
  }
  printf("%s\n", name);

  return 0;
}