#include <stdio.h>
int main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);
  // if (ch >= 'a' && ch <= 'z')
  // {
  //   printf("Lowercase letter\n");
  // }
  // else
  // {
  //   printf("Uppercase letter\n");
  // }
  ch >= 65 && ch <= 90 ? printf("Uppercase letter\n") : printf("Lowercase letter\n");

  return 0;
}